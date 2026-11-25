## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a brute-force nested loop to check every pair of elements (i, j) where j > i until two numbers add up to 	arget. Once found, allocated a 2-element integer array with malloc and returned their indices immediately.

### Complexity
- Time: O(n^2)
- Space: O(1)

### Notes
Learned to handle duplicate values like [3, 3] by ensuring j starts at i + 1 so the same index is never reused. Next time, I would use a hash map to bring time complexity down to O(n).
