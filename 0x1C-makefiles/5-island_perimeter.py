#!/usr/bin/python3
"""The island perimeter module"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid

    grid: a list of list of integers, is rectangular, width
    and height don't exceed"""

    def island_perimeter(grid):
        perimeter = 0
        for row in range(len(grid)):
            for col in range(len(grid[0])):
                if grid[row][col] == 1:
                    perimeter += 4  # Initially assume all sides are a perimeter
                    # Check each side if it's not a perimeter
                    if row - 1 >= 0 and grid[row - 1][col] == 1:
                        perimeter -= 1

                    if col - 1 >= 0 and grid[row][col - 1] == 1:
                        perimeter -= 1

                    if row + 1 < len(grid) and grid[row + 1][col] == 1:
                        perimeter -= 1

                    if col + 1 < len(grid[0]) and grid[row][col + 1] == 1:
                        perimeter -= 1

                return perimeter
