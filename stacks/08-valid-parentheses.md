## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Implemented an array-based character stack to push opening brackets (, [, and { as the string is scanned. On encountering a closing bracket, popped the top element and verified that it matched the corresponding opening type.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
Checked 	op == -1 before popping to handle inputs starting with a closing bracket, and verified 	op == -1 at the end to catch unclosed opening brackets.
