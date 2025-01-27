## Problem 1: First and Last Position of Element in Sorted Array

### Problem Statement
Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.  
- If the `target` is not found in the array, return `[-1, -1]`.
- The solution must achieve **O(log n)** runtime complexity.

### Approach
1. **Binary Search**:
   - Perform a binary search to find the **starting position** of the `target`:
     - If the middle element equals the `target`, update the answer and move the search to the left (`e = mid - 1`).
   - Similarly, perform a binary search to find the **ending position** of the `target`:
     - If the middle element equals the `target`, update the answer and move the search to the right (`s = mid + 1`).
2. Combine the results of both searches into a vector and return.

### Solution
```cpp
class Solution {
public:
    int startingPos(vector<int>& nums, int target) {
        int ans = -1;
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;
                e = mid - 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }

    int endingPos(vector<int>& nums, int target) {
        int ans = -1;
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;
                s = mid + 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(startingPos(nums, target));
        result.push_back(endingPos(nums, target));
        return result;
    }
};
```
## Problem 2: Lowest Common Ancestor of a Binary Search Tree

## Problem Statement
Given a Binary Search Tree (BST), find the **lowest common ancestor (LCA)** of two nodes `p` and `q`.  
- The **LCA** is the lowest node in the tree that has both `p` and `q` as descendants (a node can also be a descendant of itself).

## Input Format
- A `TreeNode*` representing the root of the BST.
- Two `TreeNode*` nodes `p` and `q`.

## Output Format
- The `TreeNode*` representing the lowest common ancestor node of `p` and `q`.

### Example
**Input**:  
Tree:
   6
 /   \
2     8
`p = 2`, `q = 8`

**Output**: `6` (the root is the LCA of `p` and `q`)

## Coding Platform Used
LeetCode

## Approach
1. **Recursive Traversal**:
   - Start from the root of the BST.
   - If both `p` and `q` are smaller than the root, the LCA is in the left subtree.
   - If both `p` and `q` are larger than the root, the LCA is in the right subtree.
   - Otherwise, the root is the LCA.
2. **Base Cases**:
   - If the root is `NULL`, return `NULL`.
   - If the current root is either `p` or `q`, return the root.

## Solution
```cpp
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return NULL;
        }
        if (p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        if (p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
};
```
## Problem 3: Construct Binary Search Tree from Preorder Traversal

## Problem Statement
Given an array `preorder`, which represents the **preorder traversal** of a Binary Search Tree (BST), construct the BST and return its root.  
- A **preorder traversal** visits nodes in the following order: root, left subtree, right subtree.
- It is guaranteed that a valid BST can be constructed for all test cases.

## Input Format
- An array of integers `preorder` representing the preorder traversal of the BST.

## Output Format
- The `TreeNode*` representing the root of the constructed BST.

## Coding Platform Used
LeetCode

## Approach
1. **Iterative Construction**:
   - Use the first element of `preorder` as the root.
   - For each subsequent value:
     - Traverse the tree to find the correct position:
       - If the value is greater than the current node, move to the right subtree.
       - If the value is smaller, move to the left subtree.
     - Insert the value as a new node at the correct position.
2. **BST Properties**:
   - All values in the left subtree of a node are smaller than the node.
   - All values in the right subtree are greater than the node.

## Solution
```cpp
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* dummy = new TreeNode(preorder[0]);
        for (int i = 1; i < preorder.size(); i++) {
            TreeNode* root = dummy;
            TreeNode* node = new TreeNode(preorder[i]);
            while (true) {
                if (preorder[i] > root->val) {
                    if (root->right != NULL) {
                        root = root->right;
                    } else {
                        root->right = node;
                        break;
                    }
                } else {
                    if (root->left != NULL) {
                        root = root->left;
                    } else {
                        root->left = node;
                        break;
                    }
                }
            }
        }
        return dummy;
    }
};
