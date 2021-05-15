const { createInterface } = require('readline')

function Point(x, y) {
    this.x = x
    this.y = y
}
Point.prototype.distance = function (p) {
    const x_sq = Math.pow(Math.abs(this.x - p.x), 2)
    const y_sq = Math.pow(Math.abs(this.y - p.y), 2)
    return Math.pow(x_sq + y_sq, 0.5)
}
Point.prototype.equals = function (p) {
    return this.x === p.x && this.y === p.y
}
Point.prototype.toString = function () {
    return `${this.x} ${this.y}`
}

const getLimit = (s, p) => {
    return Math.min(
        p.distance(new Point(p.x, 0)),
        p.distance(new Point(p.x, s)),
        p.distance(new Point(0, p.y)),
        p.distance(new Point(s, p.y)),
    )
}

const getCoordinate = (s, hatches) => {
    const coords = []
    for (let i = 0; i <= s; ++i) {
        for (let j = 0; j <= s; ++j) {
            const p = new Point(i, j)
            if (hatches.filter(h => h.equals(p)).length) {
                continue
            }
            const limit = getLimit(s, p)
            const distances = hatches.map(h => h.distance(p))
            const flag = distances.reduce((a, b) => a && (b <= limit), true)
            if (flag) {
                coords.push(p)
            }
        }
    }
    if (!coords.length) {
        return null
    }
    return coords.sort((a, b) => a !== b ? a.x - b.x : a.y - b.y)[0]
}

const main = async () => {
    const rl = createInterface({
        input: process.stdin,
        output: process.stdout
    })
    const asyncIterator = rl[Symbol.asyncIterator]()

    const n = parseInt((await asyncIterator.next()).value)
    for (let i = 0; i < n; ++i) {
        const [s, h] = (await asyncIterator.next()).value.split(' ').map(s => parseInt(s))
        const hatches = []
        for (let j = 0; j < h; ++j) {
            const [x, y] = (await asyncIterator.next()).value.split(' ').map(s => parseInt(s))
            hatches.push(new Point(x, y))
        }
        const coord = getCoordinate(s, hatches)
        if (coord === null) {
            console.log('poodle')
        } else {
            console.log(coord.toString())
        }

    }
}

main()