# Problem 1. Repeated Substring Pattern

## Problem Statement
Given a string `s`, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

## Approach
- Iterate from half of the string length down to 1.
- If the length is divisible by `i`, extract the substring of length `i`.
- Repeat the substring the required number of times and compare it with the original string.
- If they match, return `true`; otherwise, continue checking smaller lengths.

---

# Problem 2. Rotting Oranges

## Problem Statement
You are given an `m x n` grid where each cell can have one of three values:
- `0` representing an empty cell,
- `1` representing a fresh orange, or
- `2` representing a rotten orange.

Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return `-1`.

## Approach
- Use BFS with a queue to track rotten oranges and their time steps.
- Store visited cells in a matrix.
- Iterate through the grid to push all initially rotten oranges into the queue.
- Process each rotten orange, infecting adjacent fresh oranges.
- Track time and count of fresh oranges. If all become rotten, return time; otherwise, return `-1`.

---

# Problem 3. Flood Fill

## Problem Statement
You are given an image represented by an `m x n` grid of integers `image`, where `image[i][j]` represents the pixel value. You are also given three integers `sr`, `sc`, and `color`. Your task is to perform a flood fill on the image starting from the pixel `image[sr][sc]`.

## Approach
- Use DFS to traverse all connected components with the same starting color.
- Store the new image result separately.
- Recurse in four directions, ensuring bounds and that the color matches the original.
- Return the modified image.
