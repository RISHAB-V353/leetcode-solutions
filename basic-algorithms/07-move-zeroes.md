## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a two-pointer in-place partition where insertPos tracks where the next non-zero element belongs. Whenever a non-zero element was encountered at index i, swapped it with 
ums[insertPos] and incremented insertPos.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Swapping in place preserves the relative order of non-zero elements and handles all-zero or single-element arrays without extra passes.
