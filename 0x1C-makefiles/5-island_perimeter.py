#!/usr/bin/python3
""" Module of a function that determine the perimeter of an island """
def island_perimeter(grid):
    """ Function that determine the perimeter of a grid"""
    total = 0
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b] == 1:
                total = total + 1
        print()
    total = ((((len(grid[a])) * (len(grid))) - total) // 2)
    return total
