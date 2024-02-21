#!/usr/bin/python3
"""
    Calculates the perimeter
"""

def cuentagua(grid, i, j):
    """
        Returns the number of water neighbors
    """

    vec = 0

    if i <= 0 or not grid[i - 1][j]:
        vec += 1
    if j <= 0 or not grid[i][j - 1]:
        vec += 1
    if j >= len(grid[i] - 1 or not grid[i][j + 1]:
        vec += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        vec += 1

    return vec

def island_perimeter(grid):
    """
        Returns the perimeter
    """

    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                per += cuentagua(grid, i, j)

    return per
