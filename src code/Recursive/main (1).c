#include <stdio.h>
//Recursive implementation
// function to sort the array in a wiggle pattern
void wiggleSort(int* nums, int numsSize) {
    // if the size of the array is 1 or 0, return
    if (numsSize <= 1) {
            return;
    }
    // divide the array into two halves and sort them separately
    int mid = numsSize / 2;\
    wiggleSort(nums, mid);
    wiggleSort(nums + mid, numsSize - mid);
    // swap adjacent elements to create a wiggle pattern
    for (int i = 0; i < numsSize - 1; i++) {
            if ((i % 2 == 0 && nums[i] > nums[i+1]) || (i % 2 != 0 && nums[i] < nums[i+1])) {
                int temp = nums[i];
    nums[i] = nums[i+1];
    nums[i+1] = temp;
    }
    }
}
// function to print the elements of the array
void printArray(int* nums, int numsSize) {
    printf("[");
    for (int i = 0; i < numsSize; i++) {
            printf("%d", nums[i]);
    if (i < numsSize - 1) {
            printf(", ");
    }
    }
    printf("]\n");
}
int main() {
    int nums1[] = {1, 5, 1, 1, 6, 4};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input array: ");
    printArray(nums1, numsSize1);
    wiggleSort(nums1, numsSize1);
    printf("Output: ");
    printArray(nums1, numsSize1);
    int nums2[] = {1, 3, 2, 2, 3, 1};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input array: ");
    printArray(nums2, numsSize2);
    wiggleSort(nums2, numsSize2);
    printf("Output: ");
    printArray(nums2, numsSize2);
    return 0;
}
