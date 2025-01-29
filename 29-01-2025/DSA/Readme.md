## Problem 1. Find Minimum Operations to Make All Elements Divisible by Three

### Problem Statement:
You are given an integer array `nums`. In one operation, you can add or subtract 1 from any element of `nums`. Return the minimum number of operations to make all elements of `nums` divisible by 3.

### Approach:
To solve this problem, we need to check each element in the array and determine if it is divisible by 3. If it is not divisible by 3, we need exactly one operation to make it divisible (either add or subtract 1).
- For each element that is not divisible by 3, increment the operation count by 1.

### Code Solution:

```cpp
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 3 != 0) {
                cnt++;
            }
        }
        return cnt;
    }
};
```
## Problem 2. Convert Sorted Array to Binary Search Tree

### Problem Statement:
Given an integer array `nums` where the elements are sorted in ascending order, convert it to a height-balanced binary search tree (BST).

### Approach:
To construct a height-balanced BST, we select the middle element of the array as the root node. We then recursively do the same for the left and right subarrays to construct the left and right subtrees.
- The middle element of the array ensures that the tree remains balanced.
- The recursive function keeps breaking down the problem until it forms a BST.

### Code Solution:

```cpp
class Solution {
private:
    TreeNode* helper(vector<int>& nums, int l, int r) {
        if (l > r) {
            return NULL;
        }
        int mid = l + (r - l) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = helper(nums, l, mid - 1);
        node->right = helper(nums, mid + 1, r);
        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};
```
## Problem 3. Number of Islands

### Problem Statement:
Given an `m x n` 2D binary grid `grid`, which represents a map of '1's (land) and '0's (water), return the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are surrounded by water.

### Approach:
To solve this problem, we can use a breadth-first search (BFS) or depth-first search (DFS) to explore each island. We will:
1. Iterate through the grid to find unvisited land cells (represented by '1').
2. For each unvisited land cell, increment the island count and perform a BFS or DFS to mark all connected land cells as visited.
3. Continue the process until all cells are visited.

### Code Solution:

```cpp
class Solution {
private:
    void bfs(int i, int j, vector<vector<int>>& vis, vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vis[i][j] = 1;
        queue<pair<int, int>> q;
        q.push({i, j});
        
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for (auto dir : directions) {
                int nrow = x + dir.first;
                int ncol = y + dir.second;
                
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    cnt++;
                    bfs(i, j, vis, grid);
                }
            }
        }
        return cnt;
    }
};

