# Complexity Analysis of Solved Problems

This documents provides the time and space complexity analysis of the problems solved in this repository.

## Problems

### 0001 - Two Sum
- Solution Approach: Hash Map 
- Time Complexity: O(n) - We traverse the list once, storing elements in a has table for quick lookups.
- Space Complexity: O(n) - In worse case, we store all elements in the has table.

### 0002 - Add Two Numbers
- Solution Approach: Linked List Traversal 
- Time Complexity: O(max(m, n)) - We traverse both lists once, when m and n are their respective lengths.
- Space Complexity: O(max(m, n)) - The output list has at most max(m, n) + 1 nodes in the worse case due to carry propagation.