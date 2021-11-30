#!/usr/bin/python3

"""
Create a function def island_perimeter(grid): that returns
the perimeter of the island described in grid:

grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected
to the water around the island).
Requirements:
"""


def island_perimeter(grid):
    nro_edges, size = 0, 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                size += 1
                if (i > 0 and grid[i - 1][j]):
                    nro_edges += 1
                if (j > 0 and grid[i][j - 1]):
                    nro_edges += 1
    return size*4 - nro_edges*2
