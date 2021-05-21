const { createInterface } = require('readline')

const shiftZeroes = row => {
    const r = row.filter(x => x !== 0)
    const zeroPad = Array(row.length - r.length).fill(0)
    return r.concat(zeroPad)
}

const merge = (row, index) => {
    for (let i = index + 1; i < row.length; ++i) {
        if (row[i] === row[i - 1]) {
            row[i - 1] += row[i]
            for (let j = i + 1; j < row.length; ++j) {
                row[j - 1] = row[j]
            }
            row[row.length - 1] = 0
            return i
        }
    }
    return -1
}

const collapseRow = row => {
    let r = shiftZeroes(row)
    let index = 0
    do {
        index = merge(r, index)
    } while (index !== -1)
    return r
}

class Grid {
    constructor(rows) {
        this.rows = [...rows]
    }

    shift() {
        const shiftedRows = this.rows.map(row => collapseRow(row))
        return new Grid(shiftedRows)
    }

    rotate() {
        const rotatedRows = Array(4).fill(0).map(x => Array(4))
        for (let i = 0; i < 4; ++i) {
            for (let j = 0; j < 4; ++j) {
                rotatedRows[i][j] = this.rows[j][4 - i - 1]
            }
        }
        return new Grid(rotatedRows)
    }


    toString() {
        return this.rows.map(row => row.join(' ')).join('\n')
    }
}

async function main() {
    const rl = createInterface({ input: process.stdin, output: process.stdout })
    const input = []
    for await (const line of rl) {
        input.push(line)
    }
    rl.close()

    const rows = input.slice(0, 4).map(row => row.split(' ').map(n => parseInt(n)))
    const rotations = parseInt(input[input.length - 1]) 
    let grid = new Grid(rows)
    if (rotations) {
        for (let i = 0; i < rotations; ++i) {
            grid = grid.rotate()
        }
        grid = grid.shift()
        for (let i = 0; i < 4 - rotations; ++i) {
            grid = grid.rotate()
        }
    } else {
        grid = grid.shift()
    }
    console.log(grid.toString())
}

main()