# Problem 1: Maximum Difference Between Even and Odd Frequency I

## Problem Statement

You are given a string `s` consisting of lowercase English letters. Your task is to find the maximum difference between the frequency of two characters in the string such that:

- One of the characters has an even frequency in the string.
- The other character has an odd frequency in the string.

Return the maximum difference, calculated as the frequency of the character with an odd frequency minus the frequency of the character with an even frequency.

### Solution Approach
1. **Frequency Calculation**: First, we need to calculate the frequency of each character in the string.
   
2. **Tracking Even and Odd Frequencies**: We maintain two variables:
   - `odd` to store the maximum frequency of any character with an odd frequency.
   - `even` to store the minimum frequency of any character with an even frequency.
   
3. **Return the Difference**: Finally, return the difference between the odd frequency and the even frequency (`odd - even`).

---

# Problem 2: BFS of Graph

## Problem Statement

Given an undirected graph represented by an adjacency list `adj`, which is a vector of vectors where each `adj[i]` represents the list of vertices connected to vertex `i`. Perform a Breadth-First Traversal (BFS) starting from vertex 0, visiting vertices from left to right according to the adjacency list, and return a list containing the BFS traversal of the graph.

### Solution Approach
1. **Graph Traversal with BFS**: 
   - Start the BFS from vertex 0.
   - Use a queue to manage the nodes to visit, and a `visited` array to keep track of the visited vertices.
   
2. **Visit Neighbors**: For each vertex, visit its neighbors in the order provided by the adjacency list, ensuring that unvisited neighbors are added to the queue.

3. **Return BFS Traversal**: Once all nodes have been visited, return the list representing the BFS traversal.

---

# Problem 3: DFS of Graph

## Problem Statement

Given a connected undirected graph represented by an adjacency list `adj`, which is a vector of vectors where each `adj[i]` represents the list of vertices connected to vertex `i`. Perform a Depth First Traversal (DFS) starting from vertex 0, visiting vertices from left to right as per the adjacency list, and return a list containing the DFS traversal of the graph.

### Solution Approach
1. **Graph Traversal with DFS**:
   - Start the DFS from vertex 0.
   - Use a recursive approach to visit each vertex and mark it as visited.
   
2. **Visit Neighbors**: For each vertex, recursively visit all its unvisited neighbors in the order provided by the adjacency list.

3. **Return DFS Traversal**: Once all nodes have been visited, return the list representing the DFS traversal.
