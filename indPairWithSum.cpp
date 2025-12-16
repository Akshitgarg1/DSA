#include <iostream>
using namespace std;

void findPairWithSum(int arr[], int n, int key) {
    sort(arr, arr + n); // Sort the array

    int left = 0, right = n - 1;
    bool found = false;

    // Use two pointers to find the pair with the given sum
    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == key) {
            cout << arr[left] << " " << arr[right] << endl;
            found = true;
            break;
        } else if (currentSum < key) {
            left++;
        } else {
            right--;
        }
    }

    if (!found) {
        cout << "No Such Elements Exist" << endl;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, key;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cin >> key;
        findPairWithSum(arr, n, key);
    }

    return 0;
}
