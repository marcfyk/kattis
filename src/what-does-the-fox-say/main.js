const { createInterface } = require('readline')

const main = async () => {
    const rl = createInterface({
        input: process.stdin,
        output: process.stdout,
        terminal: false
    })
    const asyncIterator = rl[Symbol.asyncIterator]()
    const n = parseInt((await asyncIterator.next()).value)
    for (let i = 0; i < n; ++i) {
        const sounds = (await asyncIterator.next()).value.split(' ')
        const soundsSet = new Set(sounds)
        let m = (await asyncIterator.next()).value.match(/\w+ goes (\w+)/)
        do {
            soundsSet.delete(m[1])
            m = (await asyncIterator.next()).value.match(/\w+ goes (\w+)/)
        } while (m)
        const foxSounds = sounds.filter(s => soundsSet.has(s))
        console.log(foxSounds.join(' '))
    }
}


main()

