#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* empty = (char*)malloc(1);
        empty[0] = '\0';
        return empty;
    }

    int len = strlen(strs[0]);
    char* prefix = (char*)malloc((len + 1) * sizeof(char));
    strcpy(prefix, strs[0]);

    for (int i = 0; prefix[i] != '\0'; i++) {
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != prefix[i]) {
                prefix[i] = '\0';
                return prefix;
            }
        }
    }
    return prefix;
}

int main() {
    // Test Case 1 (Typical)
    char* strs1[] = {"flower", "flow", "flight"};
    char* res1 = longestCommonPrefix(strs1, 3);
    printf("Typical: \"%s\" (Expected: \"fl\")\n", res1);
    free(res1);

    // Test Case 2 (Edge: no common prefix)
    char* strs2[] = {"dog", "racecar", "car"};
    char* res2 = longestCommonPrefix(strs2, 3);
    printf("Edge: \"%s\" (Expected: \"\")\n", res2);
    free(res2);

    return 0;
}