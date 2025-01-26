# Problem Statements and Approaches

## Problem 1: Valid Mountain Array
### Problem Statement:
Given an array of integers `arr`, return `true` if and only if it is a valid mountain array.
A valid mountain array is defined as:
- `arr.length >= 3`
- There exists an index `i` such that:
  - `arr[0] < arr[1] < ... < arr[i - 1] < arr[i]`
  - `arr[i] > arr[i + 1] > ... > arr[arr.length - 1]`

### Approach:
1. **Check Length**: First, check if the length of the array is at least 3. If not, return `false`.
2. **Find Peak**: Iterate through the array to find the peak element where the array stops increasing and starts decreasing.
3. **Increase then Decrease**: Ensure that the elements before the peak are strictly increasing and the elements after the peak are strictly decreasing.
4. **Final Check**: Make sure the peak is not at the beginning or end of the array (i.e., index `i` should be between 0 and `arr.length - 1`).

---

## Problem 2: Subarray Sum Equals K
### Problem Statement:
Given an array of integers `nums` and an integer `k`, return the total number of subarrays whose sum equals `k`.

### Approach:
1. **Prefix Sum Approach**: Use a running prefix sum to keep track of the sum of elements from the start of the array to the current index.
2. **Map to Track Frequency**: Maintain a hashmap (`mpp`) to store the frequency of prefix sums encountered.
3. **Subarray Calculation**: For each index, calculate the difference `prefixSum - k`. If this difference has been encountered before (i.e., exists in the hashmap), it indicates that a subarray sum equals `k`.
4. **Count Subarrays**: Increment the counter by the frequency of `prefixSum - k` in the hashmap.
5. **Update Frequency**: Update the frequency of the current `prefixSum` in the hashmap.

---

## Problem 3: Validate Binary Search Tree (BST)
### Problem Statement:
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as:
- The left subtree of a node contains only nodes with keys less than the node's key.
- The right subtree of a node contains only nodes with keys greater than the node's key.
- Both the left and right subtrees must also be binary search trees.

### Approach:
1. **Recursive Validation**: Use recursion to traverse the tree while maintaining a valid range of values for each node.
2. **Min and Max Constraints**: For each node, check if its value is within a valid range defined by its parent. The left child should be in the range `[min, root->val)` and the right child should be in the range `(root->val, max]`.
3. **Base Case**: If the node is `NULL`, return `true` since an empty tree or subtree is a valid BST.
4. **Recursive Checks**: Recursively validate the left and right subtrees using updated min and max values based on the current node’s value.

---

## Coding Platforms Used:
 **LeetCode**

---
