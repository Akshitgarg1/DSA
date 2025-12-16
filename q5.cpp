#include <iostream>

void find_triplet_indices(int arr[], int n) {
    for (int k = n - 1; k > 1; --k) {
        int i = 0;
        int j = k - 1;
        
        while (i < j) {
            if (arr[i] + arr[j] == arr[k]) {
                std::cout << "Indices: " << i << " " << j << " " << k << std::endl;
                std::cout << "Elements: " << arr[i] << " " << arr[j] << " " << arr[k] << std::endl;
                return;
            } else if (arr[i] + arr[j] < arr[k]) {
                ++i;
            } else {
                --j;
            }
        }
    }
    
    std::cout << "No such indices found." << std::endl;
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    find_triplet_indices(arr, n);
    
    return 0;
}
