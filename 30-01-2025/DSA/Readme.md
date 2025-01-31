# Problem 1: Monotonic Array

## Problem Statement
An array is monotonic if it is either monotone increasing or monotone decreasing.

- An array `nums` is monotone increasing if for all `i <= j`, `nums[i] <= nums[j]`.
- An array `nums` is monotone decreasing if for all `i <= j`, `nums[i] >= nums[j]`.

Given an integer array `nums`, return `true` if the given array is monotonic, or `false` otherwise.

## Approach
1. If the array has `n <= 2` elements, it is always monotonic.
2. Check if the array is increasing:
   - Iterate through the array and count elements satisfying `nums[i] <= nums[i+1]`.
   - If all `n-1` pairs satisfy this condition, return `true`.
3. Check if the array is decreasing:
   - Iterate through the array and count elements satisfying `nums[i] >= nums[i+1]`.
   - If all `n-1` pairs satisfy this condition, return `true`.
4. If neither condition holds, return `false`.

---

# Problem 2: Count Complete Tree Nodes

## Problem Statement
Given the root of a **complete binary tree**, return the number of nodes in the tree.

A **complete binary tree** has all levels filled except possibly the last, which is filled from left to right.

Design an algorithm that runs in **less than O(n) time complexity**.

## Approach
1. If the tree is empty (`root == NULL`), return `0`.
2. Use a helper function `solve(root, cnt)` to recursively count nodes.
3. Traverse the left and right subtrees while incrementing the count.
4. Return the total count.

---

# Problem 3: Number of Provinces

## Problem Statement
There are `n` cities. Some of them are connected, while some are not.

- If city `a` is connected directly with city `b`, and city `b` is connected directly with city `c`, then city `a` is connected **indirectly** with city `c`.
- A province is a group of directly or indirectly connected cities and no other cities outside of the group.

Given an `n x n` matrix `isConnected` where `isConnected[i][j] = 1` if the `i-th` city and the `j-th` city are **directly connected**, and `isConnected[i][j] = 0` otherwise, return **the number of provinces**.

## Approach
1. Convert the given adjacency matrix into an adjacency list.
2. Use **DFS traversal** to find connected components.
3. Maintain a `visited` array to mark visited cities.
4. Traverse all cities, and for each unvisited city, perform DFS and increment the count.
5. The number of DFS calls represents the number of provinces.

```
