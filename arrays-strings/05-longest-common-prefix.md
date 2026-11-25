## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Used vertical scanning by copying strs[0] as the candidate prefix and comparing it character by character against every other string at index i. Truncated the string with a null terminator '\0' at the first mismatch or end of any shorter word.

### Complexity
- Time: O(S)
- Space: O(1)

### Notes
S represents the total number of characters across all strings. Checking strs[j][i] == '\0' before comparing characters prevents reading past shorter strings in the array.
