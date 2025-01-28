# Binary Search Tree Problems

## Problem 1: Binary Search Tree Iterator

### Problem Statement
Implement the `BSTIterator` class to represent an iterator over the **in-order traversal** of a Binary Search Tree (BST).  
The class provides the following functionality:
- **`BSTIterator(TreeNode* root)`**: Initializes the iterator with the root of the BST.
- **`int next()`**: Moves the iterator to the next element in the in-order traversal and returns that element.
- **`bool hasNext()`**: Returns `true` if there are more elements to iterate, otherwise `false`.

#### Approach
1. Use a **stack** to simulate the in-order traversal.
2. Push all the left children of the current node into the stack.
3. For the `next()` function, retrieve the top element of the stack (smallest value), move to the right child, and repeat.
4. For the `hasNext()` function, simply check if the stack is not empty.

#### Code
```cpp
class BSTIterator {
private:
    stack<TreeNode*> st;

public:
    BSTIterator(TreeNode* root) {
        pushNode(root);
    }

    int next() {
        TreeNode* node = st.top();
        st.pop();
        if (node->right != NULL) {
            pushNode(node->right);
        }
        return node->val;
    }

    bool hasNext() {
        return !st.empty();
    }

    void pushNode(TreeNode* node) {
        while (node != NULL) {
            st.push(node);
            node = node->left;
        }
    }
};
```
# Binary Search Tree Problems

## Problem 2: Two Sum IV - Input is a BST

### Problem Statement
Given the root of a Binary Search Tree and an integer `k`, determine if there exist **two elements** in the BST such that their sum equals `k`.
k

### Approach
1. Perform an **in-order traversal** to collect all elements of the BST in sorted order.
2. Use the **two-pointer technique**:
   - Start with two pointers: one at the beginning (`i`) and the other at the end (`j`) of the sorted array.
   - If the sum of the elements at `i` and `j` equals `k`, return `true`.
   - If the sum is less than `k`, increment `i`. Otherwise, decrement `j`.
3. Return `false` if no such pair is found.

### Code
```cpp
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> vec;
        inOrder(root, vec);
        int i = 0, j = vec.size() - 1;
        while (i < j) {
            if (vec[i] + vec[j] == k) {
                return true;
            } else if (vec[i] + vec[j] < k) {
                i++;
            } else {
                j--;
            }
        }
        return false;
    }

    void inOrder(TreeNode* root, vector<int>& vec) {
        if (!root) return;
        inOrder(root->left, vec);
        vec.push_back(root->val);
        inOrder(root->right, vec);
    }
};
```
## Problem 3: Recover Binary Search Tree

### Problem Statement
You are given the root of a Binary Search Tree (BST), where the values of **exactly two nodes** have been swapped by mistake. Recover the tree without changing its structure.

### Approach
1. Perform an **in-order traversal** to collect all elements of the BST in sorted order. This traversal provides the elements in ascending order.
2. Sort the collected elements to determine the correct order.
3. Perform another in-order traversal of the BST to replace the incorrect node values with the correct ones from the sorted array.

### Key Steps
- **In-Order Traversal**:
  - Traverse the left subtree, visit the root, and then traverse the right subtree.
  - Collect the values into a vector for sorting.
- **Correction**:
  - Sort the vector.
  - During a second traversal, replace incorrect node values with the sorted ones.

### Code
```cpp
class Solution {
public:
    void recoverTree(TreeNode* root) {
        vector<int> vec;                  // To store in-order traversal
        inorder(root, vec);               // Step 1: Perform in-order traversal
        sort(vec.begin(), vec.end());     // Step 2: Sort the collected values
        int i = 0;                        // Pointer for sorted values
        recoverTreeHelper(root, vec, i);  // Step 3: Correct tree values
    }

    void recoverTreeHelper(TreeNode* root, vector<int>& vec, int& i) {
        if (!root) return;
        recoverTreeHelper(root->left, vec, i);  // Traverse left subtree
        if (root->val != vec[i]) {
            root->val = vec[i];                 // Replace incorrect value
        }
        i++;
        recoverTreeHelper(root->right, vec, i); // Traverse right subtree
    }

    void inorder(TreeNode* root, vector<int>& vec) {
        if (!root) return;
        inorder(root->left, vec);         // Traverse left subtree
        vec.push_back(root->val);         // Visit the root
        inorder(root->right, vec);        // Traverse right subtree
    }

