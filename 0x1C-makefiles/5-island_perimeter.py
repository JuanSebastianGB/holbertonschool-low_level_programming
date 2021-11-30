#!/usr/bin/python3
"""
Store function island_perimeter
"""


def island_perimeter(grid):
    """
    Create a function def island_perimeter(grid): that returns
    the perimeter of the island described in grid:
    """
    nro_edges, size = 0, 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                size += 1
                if (i > 0 and grid[i - 1][j]):
                    nro_edges += 1
                if (j > 0 and grid[i][j - 1]):
                    nro_edges += 1
    return size * 4 - nro_edges * 2
