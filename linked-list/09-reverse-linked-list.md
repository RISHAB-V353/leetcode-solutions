## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
Used iterative three-pointer reversal (prev, curr, and 
extNode) to reverse the 
ext pointer of each node in place. Saved curr->next before redirecting it to prev, then advanced both pointers forward until curr reached NULL.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Empty lists (head == NULL) and single-node lists work out of the box without separate edge-case checks because prev starts at NULL.
