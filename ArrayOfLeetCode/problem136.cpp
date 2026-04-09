#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
int ans=0;
       for(auto val:nums){
        ans = ans ^ val;
       }
       return ans;
    }

};

int main(){
Solution sol;
    vector<int> digits = {3,2,2,4,4};
int val = sol.singleNumber(digits);
cout<<val;
}