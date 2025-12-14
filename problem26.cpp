#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
    int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution obj;
    int k = obj.removeDuplicates(nums);
    cout<<"Array after removing duplicates the distinct elemet number is: ";
cout<<k;
cout <<endl;
cout<<"The array is: ";
for(int i=0;i<k;i++){
    cout<<" "<<nums[i];
}


    return 0;
}