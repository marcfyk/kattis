const { createInterface } = require('readline')

async function main() {
    const rl = createInterface({ input: process.stdin, output: process.stdout })
    const iterator = rl[Symbol.asyncIterator]()
    const n = parseInt((await iterator.next()).value)
    const keywords = (await Promise.all([...Array(n).keys()].map(i => iterator.next())))
        .map(({ value }) => value)
        .map(x => x.split('-').join(' '))
        .map(x => x.toLowerCase())
    rl.close()
    console.log(new Set(keywords).size)
}

main()