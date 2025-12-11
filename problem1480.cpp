#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int sum = 0;
        for (int num : nums) {
            sum += num;
            result.push_back(sum);
        }
        return result;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> ans = obj.runningSum(nums);

    cout << "Running Sum: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
