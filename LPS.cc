#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";

    // dp[i][j] will be 'true' if the string from index i to j is a palindrome.
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    int start = 0; // To store the starting index of the longest palindromic substring
    int maxLength = 1; // To store the maximum length of the palindrome found

    // All substrings of length 1 are palindromes
    for (int i = 0; i < n; ++i)
        dp[i][i] = true;

    // Check for substrings of length 2
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Check for lengths greater than 2
    for (int length = 3; length <= n; ++length) {
        for (int i = 0; i < n - length + 1; ++i) {
            int j = i + length - 1;

            // If the current substring is palindrome
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;

                if (length > maxLength) {
                    start = i;
                    maxLength = length;
                }
            }
        }
    }

    return s.substr(start, maxLength);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string result = longestPalindrome(s);
    cout << "The longest palindromic substring is: " << result << endl;

    return 0;
}
