#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;

        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }

        return maxCount;
    }

};
int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements of array (0s and 1s): ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);

    cout << "The maximum number of consecutive 1s in the array is: " << ans << endl;

    return 0;
}