#!/usr/bin/python3
"""............................................"""


def num_water_neighbors(grid, i, j):
    """......................................."""

    n = 0

    if i <= 0 or not grid[i - 1][j]:
        n += 1
    if j <= 0 or not grid[i][j - 1]:
        n += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        n += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        n += 1

    return n


def island_perimeter(grid):
    """.................................."""

    p = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y]:
                p += num_water_neighbors(grid, x, y)

    return p
