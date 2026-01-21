#include <bits/stdc++.h>
using namespace std;

int dominantIndex(vector<int>& nums) {
    int max1 = -1, max2 = -1;
    int index = -1;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
            index = i;
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
    }

    if (max1 >= 2 * max2)
        return index;
    else
        return -1;
}

int main() {
    vector<int> nums = {3, 6, 1, 0};
    cout << dominantIndex(nums) << endl;
}
