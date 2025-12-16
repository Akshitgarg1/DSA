#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> NSL(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] < nums[st.top()]) {
            res[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}

int main() {
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> res = NSL(nums);
    cout << "nearest smallest to left:" << endl;
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
