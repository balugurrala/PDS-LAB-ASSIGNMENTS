#include <stdio.h>
#include <stdlib.h>

void findDuplicates(int *nums, int n) {
    int i;
    printf("Duplicate elements in the array are: ");
    
    for (i = 0; i < n + 1; i++) {
        int index = abs(nums[i]);
        if (nums[index] >= 0)
            nums[index] = -nums[index];
        else
            printf("%d ", index);
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 2}; 
    int n = sizeof(nums) / sizeof(nums[0]) - 1; 
    
    findDuplicates(nums, n);
    
    return 0;
}