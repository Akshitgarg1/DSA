#include <iostream>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickselect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pivotIndex = partition(arr, low, high);
        if (pivotIndex == k) {
            return arr[pivotIndex];
        } else if (pivotIndex < k) {
            return quickselect(arr, pivotIndex + 1, high, k);
        } else {
            return quickselect(arr, low, pivotIndex - 1, k);
        }
    }
    return -1; // Error case
}

int findKthSmallest(int arr[], int n, int k) {
    if (k < 0 || k > n) {
        return -1; // Error case
    }
    return quickselect(arr, 0, n - 1, k - 1);
}

int findKthLargest(int arr[], int n, int k) {
    if (k < 0 || k > n) {
        return -1; // Error case
    }
    return quickselect(arr, 0, n - 1, n - k);
}

int main() {
    int arr[] = {3, 1, 7, 5, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    std::cout << k << "th smallest element is: " << findKthSmallest(arr, n, k) << std::endl;
    std::cout << k << "th largest element is: " << findKthLargest(arr, n, k) << std::endl;
    return 0;
}
