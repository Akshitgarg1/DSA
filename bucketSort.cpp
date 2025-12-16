#include<iostream>

using namespace std;

void insertionSort(float bucket[], int n) {
    for (int i = 1; i < n; i++) {
        float key = bucket[i];
        int j = i - 1;
        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    const int numOfBuckets = 10; // Assuming 10 buckets for simplicity
    float buckets[numOfBuckets][n];
    int bucketSizes[numOfBuckets] = {0}; // Initialize all bucket sizes to 0

    for (int i = 0; i < n; i++) {
        int bIdx = numOfBuckets * arr[i];
        buckets[bIdx][bucketSizes[bIdx]++] = arr[i];
    }

    for (int i = 0; i < numOfBuckets; i++) {
        insertionSort(buckets[i], bucketSizes[i]);
    }

    int idx = 0;
    for (int i = 0; i < numOfBuckets; i++) {
        for (int j = 0; j < bucketSizes[i]; j++) {
            arr[idx++] = buckets[i][j];
        }
    }
}

void print(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    float arr[] = {0.79, 0.13, 0.64, 0.39, 0.20, 0.89, 0.53, 0.42, 0.06, 0.94};
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, n);
    print(arr, n);
    return 0;
}
