## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Checked string lengths first for an early exit, then used a fixed 26-integer frequency array for lowercase English letters. Incremented counts for characters in s and decremented for 	 in a single pass, verifying all counts return to zero.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Checking strlen(s) != strlen(t) up front avoids out-of-bounds reads when 	 is shorter than s.
