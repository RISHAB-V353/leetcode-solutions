#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;

    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }
            char open = stack[top--];
            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{')) {
                free(stack);
                return false;
            }
        }
    }

    bool valid = (top == -1);
    free(stack);
    return valid;
}

int main() {
    // Test Case 1 (Typical)
    printf("Typical: %d (Expected: 1)\n", isValid("()[]{}"));

    // Test Case 2 (Edge: single unclosed bracket)
    printf("Edge: %d (Expected: 0)\n", isValid("["));

    return 0;
}