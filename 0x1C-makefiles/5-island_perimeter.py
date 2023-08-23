#!/usr/bin/python3

"""
Module that contains the function island_perimeter.
"""


def island_perimeter(grid):
    """
    Computes the length of the perimeter of an island.
    """
    perimeter = 0
    for b, row in enumerate(grid):
        for a, cell in enumerate(row):
            if cell == 1:
                if b == 0 or grid[b - 1][a] == 0:
                    perimeter += 1
                if b == len(grid) - 1 or grid[b + 1][a] == 0:
                    perimeter += 1
                if a == 0 or grid[b][a - 1] == 0:
                    perimeter += 1
                if a == len(row) - 1 or grid[b][a + 1] == 0:
                    perimeter += 1

    return perimeter
