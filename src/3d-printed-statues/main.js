const { createInterface } = require('readline')


const solve = (n, printers, days) => {
    if (n <= 0) {
        return days
    } else if (n > printers) {
        return solve(n, printers * 2, days + 1)
    } else {
        return solve(n - printers, printers, days + 1)
    }
}

const main = async () => {
    const rl = createInterface({ input: process.stdin, output: process.stdout })
    const n = parseInt((await rl[Symbol.asyncIterator]().next()).value)
    rl.close()
    console.log(solve(n, 1, 0))
}

main()

