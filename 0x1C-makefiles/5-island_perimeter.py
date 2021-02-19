#!/usr/bin/python3
"""
Give perimeter of an island
"""


def island_perimeter(grid):
    """
        grid: matrix of 1 and 0
        0 is water
        1 is island
        only vertical and horizontal
    """
    len_width = len(grid[0])
    l_h = len(grid)
    count = 0
    perimeter = 0
    for i in range(0, l_h):
        for j in range(0, len_width):
            if (grid[i][j]):
                count = 0
                if (i > 0 and grid[i - 1][j]):
                    count += 1
                if (j > 0 and grid[i][j - 1]):
                    count += 1
                if (i < l_h-1 and grid[i + 1][j]):
                    count += 1
                if (j < len_width-1 and grid[i][j + 1]):
                    count += 1
                perimeter += (4 - count)
    return perimeter
