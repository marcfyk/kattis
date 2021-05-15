const { createInterface } = require('readline')

function intersection(s1, s2) {
    if (s1.size > s2.size) {
        return union(s2, s1)
    }
    const s = new Set()
    for (const e of s1) {
        if (s2.has(e)) {
            s.add(e)
        }
    }
    return s
}

async function main() {
    const rl = createInterface({
        input: process.stdin,
        output: process.stdout
    })

    const iterator = rl[Symbol.asyncIterator]()

    const [n, m] = (await iterator.next()).value.split(' ').map(x => parseInt(x))
    const totalItems = []
    for (let i = 0; i < n; ++i) {
        const items = new Set((await iterator.next()).value.split(' '))
        totalItems.push(items)
    }
    rl.close()

    let identity = totalItems[0]
    for (let i = 1; i < n; ++i) {
        identity = intersection(identity, totalItems[i])
    }
    const output = [...identity].sort((a, b) => a.localeCompare(b))
    console.log(output.length)
    output.forEach(o => console.log(o))
}

main()