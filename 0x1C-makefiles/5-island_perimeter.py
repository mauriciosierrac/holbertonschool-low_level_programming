#!/usr/bin/python3
'''5-island_perimeter module'''


def island_perimeter(grid):
    '''define perimeter of island with numbers of grid'''

    s = 0
    lg = len(grid) - 1
    wd = len(grid[0]) - 1

    for x, y in enumerate(grid):
        for j, n in enumerate(y):
            if n == 1:
                if x == 0 or grid[x - 1][j] != 1:
                    s += 1
                if j == 0 or grid[x][j - 1] != 1:
                    s += 1
                if j == wd or grid[x][j + 1] != 1:
                    s += 1
                if x == lg or grid[x + 1][j] != 1:
                    s += 1
    return s
