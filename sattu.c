#include <stdio.h>

// Function to find maximum sum of subarray of length 2
int maxArraySum(int arr[], int n) {
    if (n < 2) {
        return -1; // not possible
    }

    int maxSum = arr[0] + arr[1];

    for (int i = 1; i < n - 1; i++) {
        int sum = arr[i] + arr[i + 1];
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {4, -2, 5, -1, 2, -3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxArraySum(arr, n);

    if (result != -1)
        printf("Maximum sum of subarray of length 2 = %d\n", result);
    else
        printf("Array must have at least 2 elements.\n");

    return 0 ;
}