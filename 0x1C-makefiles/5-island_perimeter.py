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
    idx_v = None
    counter_vert = 0
    counter_h = 0
    signal = 0
    for idx_h, h in enumerate(grid):
        for idx_w, w in enumerate(h):
            if w == 1 and grid[idx_h + 1][idx_w] == 1 or w == 1 \
             and grid[idx_h + 1][idx_w] == 0 and grid[idx_h - 1][idx_w] == 1:
                counter_vert += 1
            if w == 1 and h[idx_w + 1] == 1 or w == 1 and h[idx_w - 1] == 1:
                counter_h += 1
    # print("vertical : {}".format(counter_vert))
    # print("horizontal : {}".format(counter_h))
    return (2 * (counter_vert + counter_h))
