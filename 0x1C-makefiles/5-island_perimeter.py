#!/usr/bin/python3
""" Module of a function that determine the perimeter of an island """


def island_perimeter(grid):
    """ Function that determine the perimeter of a grid"""
    total = 0
    for b in range(len(grid)):
        for a in range(len(grid[b])):
            if (a == 0) and (b == 0):
                if grid[b][a] == 1:
                    if grid[b][a + 1] == 0:
                        total = total + 1
                    if grid[b + 1][a] == 0:
                        total = total + 1
            if (a == len(grid[b]) - 1) and b == 0:
                if grid[b][a] == 1:
                    if grid[b + 1][a] == 0:
                        total = total + 1
                    if grid[b][a - 1] == 0:
                        total = total + 1
            if a == 0 and b == (len(grid) - 1):
                if grid[b][a] == 1:
                    if grid[b][a + 1] == 0:
                        total = total + 1
                    if grid[b - 1][a] == 0:
                        total = total + 1
            if b == (len(grid) - 1) and a == (len(grid[b]) - 1):
                if grid[b][a] == 1:
                    if grid[b - 1][a] == 0:
                        total = total + 1
                    if grid[b][a - 1] == 0:
                        total = total + 1
            if (b == 0 and a > 0) and a < (len(grid[b]) - 1):
                if grid[b][a] == 1:
                    if grid[b][a - 1] == 0:
                        total = total + 1
                    if grid[b + 1][a] == 0:
                        total = total + 1
                    if grid[b][a + 1] == 0:
                        total = total + 1
            if (b == 0 and b < (len(grid) - 1)) and (a < len(grid[b]) - 1):
                if grid[b][a] == 1:
                    if grid[b - 1][a] == 0:
                        total = total + 1
                    if grid[b][a + 1] == 0:
                        total = total + 1
                    if grid[b + 1][a] == 0:
                        total = total + 1
            if b > 0 and (a == len(grid[b]) -1):
                if grid[b][a] == 1:
                    if grid[b - 1][a] == 0:
                        total = total + 1
                    if grid[b][a - 1] == 0:
                        total = total + 1
                    if grid[b + 1][a] == 0:
                        total = total + 1
            if (b == len(grid) - 1) and a > 0 and a < len(grid[b]) - 1:
                if grid[b][a] == 1:
                    if grid[b][a - 1] == 0:
                        total = total + 1
                    if grid[b - 1][a] == 0:
                        total = total + 1
                    if grid[b][a + 1] == 0:
                        total = total + 1
            else:
                if grid[b][a] == 1:
                    if grid[b][a - 1] == 0:
                        total = total + 1
                    if grid[b][a + 1] == 0:
                        total = total + 1
                    if grid[b - 1][a] == 0:
                        total = total + 1
                    if grid[b + 1][a] == 0:
                        total = total + 1

    return total
