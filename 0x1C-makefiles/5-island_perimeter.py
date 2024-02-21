#!/usr/bin/python3
""" module that defines an island perimeter """


def island_perimeter(grid):
    """
    Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of lists of integers representing an island.

    Returns:
        int: The perimeter of the island defined in the grid.
    """
    len_width = len(grid[0])
    len_height = len(grid)
    edges_0 = 0
    size_0 = 0

    for k in range(len_height):
        for l in range(len_width):
            if grid[k][l] == 1:
                size_0 += 1
                if (l > 0 and grid[k][l - 1] == 1):
                    edges_0 += 1
                if (k > 0 and grid[k - 1][l] == 1):
                    edges_0 += 1
    return size_0 * 4 - edges_0 * 2
