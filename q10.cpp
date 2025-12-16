#include <iostream>
using namespace std;

// Function to find common elements in two sorted arrays
void findCommonElements(int arr1[], int m, int arr2[], int n) {
    int i = 0, j = 0;

    // Traverse both arrays simultaneously
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else { // If both elements are equal, it's a common element
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}

int main() {
    int m, n;
    cin >> m;
    int arr1[m];
    for (int i = 0; i < m; ++i) {
        cin >> arr1[i];
    }
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    // Find and print common elements
    findCommonElements(arr1, m, arr2, n);
    cout << endl;

    return 0;
}
