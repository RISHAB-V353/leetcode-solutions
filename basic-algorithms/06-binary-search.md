## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
Maintained left and ight search boundaries on the sorted array and repeatedly checked the midpoint mid. Halved the search space each iteration by moving left or ight past mid until the target was found or the range collapsed.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Computed mid = left + (right - left) / 2 instead of (left + right) / 2 to prevent integer overflow on large arrays.
