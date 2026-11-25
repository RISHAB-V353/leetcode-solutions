#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[insertPos];
            nums[insertPos] = nums[i];
            nums[i] = temp;
            insertPos++;
        }
    }
}

int main() {
    // Test Case 1 (Typical)
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printf("Typical: [%d, %d, %d, %d, %d] (Expected: [1, 3, 12, 0, 0])\n",
           nums1[0], nums1[1], nums1[2], nums1[3], nums1[4]);

    // Test Case 2 (Edge: single zero)
    int nums2[] = {0};
    moveZeroes(nums2, 1);
    printf("Edge: [%d] (Expected: [0])\n", nums2[0]);

    return 0;
}