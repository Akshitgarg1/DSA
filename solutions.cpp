#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> permutations_lexicographic(string s) {
    vector<string> perms;
    sort(s.begin(), s.end());
    do {
        perms.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    return perms;
}

int main() {
    string input_string;
    cin >> input_string;

    vector<string> result = permutations_lexicographic(input_string);
    for (const string& perm : result) {
        cout << perm << endl;
    }

    return 0;
}
