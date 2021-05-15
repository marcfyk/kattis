const { createInterface } = require('readline')

function getDivisors(n) {
    const divisors = new Set([1])
    for (let i = 2; i < Math.sqrt(n) + 1; ++i) {
        if (n % i === 0) {
            divisors.add(i)
            divisors.add(n / i)
        }
    }
    return [...divisors]
}

function checkPerfect(n) {
    const divisors = getDivisors(n)
    const sum = divisors.reduce((a, b) => a + b, 0)
    const diff = Math.abs(n - sum)
    switch (diff) {
        case 0:
            console.log(`${n} perfect`)
            break
        case 1:
        case 2:
            console.log(`${n} almost perfect`)
            break
        default:
            console.log(`${n} not perfect`)
            break
    }
}

async function main() {
    const rl = createInterface({ 
        input: process.stdin, 
        output: process.stdout 
    })
    const iterator = rl[Symbol.asyncIterator]()
    const numbers = []
    let n = (await iterator.next()).value
    while (n) {
        numbers.push(n)
        n = (await iterator.next()).value
    }
    rl.close()

    numbers.forEach(n => checkPerfect(n))
}

main()