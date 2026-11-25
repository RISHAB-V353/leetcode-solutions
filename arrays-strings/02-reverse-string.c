#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    // Test Case 1 (Typical)
    char s1[] = "hello";
    reverseString(s1, 5);
    printf("Typical: %s (Expected: olleh)\n", s1);

    // Test Case 2 (Edge: single character)
    char s2[] = "a";
    reverseString(s2, 1);
    printf("Edge: %s (Expected: a)\n", s2);

    return 0;
}