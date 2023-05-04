#include <stdio.h>
void wiggleSort(int* nums, int numsSize) {
    // Loop through the array
    for (int i = 0; i < numsSize - 1; i++) {
            // Check if the current number needs to be swapped with the next number to create the
            wiggle pattern
            if ((i % 2 == 0 && nums[i] > nums[i + 1]) || (i % 2 == 1 && nums[i] < nums[i + 1])) {// Swap the current and next numbers
                int temp = nums[i];
    nums[i] = nums[i + 1];
    nums[i + 1] = temp;
    }
  }
}
// This function prints the array
void printArray(int* nums, int numsSize) {
    // Print the opening bracket for the array
    printf("[");
    // Loop through the array
    for (int i = 0; i < numsSize; i++) {
            // Print the current number
            printf("%d", nums[i]);
    // Print a comma after the number, except for the last number
    if (i != numsSize - 1) {
            printf(",");
     }
    }
    // Print the closing bracket for the array and a newline character
    printf("]\n");
}
int main() {
    int nums1[] = {1, 5, 1, 1, 6, 4};
    int numsSize1 = 6;
    printf("Input array: ");
    printArray(nums1, numsSize1);
    wiggleSort(nums1, numsSize1);
    printf("Output array: ");
    printArray(nums1, numsSize1);
    int nums2[] = {1, 3, 2, 2, 3, 1};
    int numsSize2 = 6;
    printf("Input array: ");
    printArray(nums2, numsSize2);
    wiggleSort(nums2, numsSize2);
    printf("Output array: ");
    printArray(nums2, numsSize2);
    return 0;
}
