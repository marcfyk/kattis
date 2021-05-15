const {createInterface} = require('readline')

const rl = createInterface({
    input: process.stdin,
    output: process.stdout
})

const i = rl[Symbol.asyncIterator]()

const main = async () => {
    let t = parseInt((await i.next()).value)
    while (t--) {
        let n = parseInt((await i.next()).value)
        const shipments = new Map()
        while (n--) {
            const tokens = (await i.next()).value.split(' ')
            const [toy, num] = [tokens[0], parseInt(tokens[1])]
            if (!shipments.has(toy)) {
                shipments.set(toy, 0)
            }
            shipments.set(toy, shipments.get(toy) + num)
        }
        const sortedEntries = [...shipments.entries()].sort(([k1, v1], [k2, v2]) => v1 !== v2 ? v2 - v1 : k1.localeCompare(k2))
        console.log(sortedEntries.length)
        sortedEntries.forEach(([k, v]) => console.log(k, v))
    }

}

main()