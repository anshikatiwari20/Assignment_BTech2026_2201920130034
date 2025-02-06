## Problem 1: 01 Matrix 

### Problem Statement
Given an `m x n` binary matrix `mat`, return the distance of the nearest `0` for each cell.

The distance between two cells sharing a common edge is `1`.

### Solution Approach
- Use **BFS (Breadth-First Search)** to find the shortest distance.
- Initialize a queue with all `0` cells and mark them as visited.
- Use a direction array to traverse in 4 directions.
- Process each cell in the queue and update distances.

---

## Problem 2: Surrounded Regions

### Problem Statement
You are given an `m x n` matrix `board` containing letters `'X'` and `'O'`. Capture regions that are surrounded by replacing all `'O'`s with `'X'`s.

### Solution Approach
- Use **DFS (Depth-First Search)** to find all `'O'`s connected to the boundary.
- Mark these `'O'`s to avoid converting them.
- Convert unmarked `'O'`s to `'X'`.

---

## Problem 3: Number of Enclaves

### Problem Statement
Given an `m x n` binary matrix `grid` where `0` represents sea and `1` represents land, return the count of land cells that cannot reach the boundary.

### Solution Approach
- Use **DFS (Depth-First Search)** to mark all land cells connected to the boundary.
- Count the remaining land cells.


