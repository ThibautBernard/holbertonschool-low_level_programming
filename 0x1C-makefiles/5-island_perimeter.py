#!/usr/bin/python3
"""
    Return the perimeter
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
    len_width = len(grid[0])
    l_h = len(grid)
    passed = 0
    signal = 0
    for idx_h, h in enumerate(grid):
        passed = 0
        for idx_w, w in enumerate(h):
            if idx_h + 1 < l_h and idx_h - 1 >= 0 and passed == 0:
                if w == 1 and grid[idx_h + 1][idx_w] == 1 or \
                  w == 1 and grid[idx_h + 1][idx_w] == 0 \
                  and grid[idx_h - 1][idx_w] == 1 \
                  or w == 1 and counter_vert == 0:
                        counter_vert += 1
                        passed = 1
            elif counter_vert == 0 and w == 1 and passed == 0 or \
                    idx_h + 1 >= l_h and w == 1 and passed == 0:
                counter_vert += 1
                passed = 1
            if signal == 0 and idx_w - 1 >= 0:
                if w == 1 and h[idx_w - 1] == 1 or w == 1 and counter_h == 0:
                    counter_h += 1
            elif signal == 0 and counter_h == 0 and w == 1:
                counter_h += 1
        if counter_h > 1 and signal == 0:
            signal = 1
    return (2 * (counter_vert + counter_h))
