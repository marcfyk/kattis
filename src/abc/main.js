const { createInterface } = require('readline')

const main = async () => {
    const rl = createInterface({ input: process.stdin, output: process.stdout })
    const iterator = rl[Symbol.asyncIterator]()
    const numbers = (await iterator.next()).value
        .split(' ')
        .map(x => parseInt(x))
        .sort((a, b) => a - b)
        .map((value, index) => ({ value, index }))
        .reduce((a, b) => ({...a, [b.index]: b.value}), {})

    const offset = 'A'.charCodeAt()
    const orderings = (await iterator.next()).value.split('').map(x => x.charCodeAt() - offset).map(x => x.toString())
    const output = orderings.map(x => numbers[x]).join(' ')
    console.log(output)
    rl.close()
}

main()