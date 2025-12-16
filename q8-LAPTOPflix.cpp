#include <iostream>
#include <cstring>
using namespace std;

const int MAX_CHAR = 26; // Assuming only lowercase English alphabets

void findMaxOccurrence(char arr[], int n) {
    int count[MAX_CHAR] = {0};
    
    // Count occurrences of each alphabet
    for (int i = 0; i < n; ++i) {
        count[arr[i] - 'a']++;
    }

    int maxOccurrence = 0;
    char maxChar = '\0';
    bool duplicatesPresent = false;

    // Find the alphabet with maximum occurrences
    for (int i = 0; i < MAX_CHAR; ++i) {
        if (count[i] > maxOccurrence) {
            maxOccurrence = count[i];
            maxChar = i + 'a';
            duplicatesPresent = true;
        } else if (count[i] == maxOccurrence) {
            duplicatesPresent = false;
        }
    }

    // Output the result
    if (duplicatesPresent) {
        cout << maxChar << " - " << maxOccurrence << endl;
    } else {
        cout << "No Duplicates Present" << endl;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        char arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        findMaxOccurrence(arr, n);
    }

    return 0;
}
