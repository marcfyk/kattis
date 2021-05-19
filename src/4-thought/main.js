const { createInterface } = require('readline')

function Operator(symbol, precedence) {
    this.symbol = symbol
    this.precedence = precedence
}
Operator.prototype.toString = function () { return this.symbol }
Operator.types = { '+': new Operator('+', 0), '-': new Operator('-', 0), '*': new Operator('*', 1), '/': new Operator('/', 1) }
Operator.combinations = buildOperatorsCombinations(Object.values(Operator.types))

function buildOperatorsCombinations(operators) {
    const combinations = []
    for (const x of operators) {
        for (const y of operators) {
            for (const z of operators) {
                combinations.push([x, y, z])
            }
        }
    }
    return combinations
}

function Expression(operators) {
    this.tokens = [4, operators[0], 4, operators[1], 4, operators[2], 4]
    this.rpn = toRpn(this.tokens)
    this.result = evaluateRpn(this.rpn)
}
Expression.prototype.toString = function () { return `${this.tokens.join(' ')} = ${this.result}` }
Expression.combinations = Operator.combinations.map(operators => new Expression(operators))
Expression.table = Expression.combinations.reduce((a, b) => ({...a, [b.result]: b.toString()}), {})


function toRpn(tokens) {
    const ops = []
    const rpn = []
    for (const token of tokens) {
        if (token === 4) {
            rpn.push(token)
        } else {
            while(ops.length && ops[ops.length - 1].precedence >= token.precedence) {
                rpn.push(ops.pop())
            }
            ops.push(token)
        }
    }
    while (ops.length) {
        rpn.push(ops.pop())
    }
    return rpn
}

function evaluateRpn(rpn) {
    const result = []
    for (const token of rpn) {
        if (typeof(token) === 'number') {
            result.push(token)
        } else {
            const x = result.pop()
            const y = result.pop()
            switch (token.symbol) {
                case '+':
                    result.push(x + y)
                    break
                case '-':
                    result.push(y - x)
                    break
                case '*':
                    result.push(x * y)
                    break
                case '/':
                    result.push(Math.floor(y / x))
                    break
                default:
                    throw Error()
            }
        }
    }
    return result[0]
}

async function main() {
    const rl = createInterface({ input: process.stdin, output: process.stdout })
    const iterator = rl[Symbol.asyncIterator]()
    const m = parseInt((await iterator.next()).value)
    const numbers = (await Promise.all([...Array(m).keys()].map(x => iterator.next()))).map(x => x.value)
    rl.close()
    numbers.map(n => n in Expression.table ? Expression.table[n] : 'no solution').forEach(x => console.log(x))
}

main()