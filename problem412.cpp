#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result; // Use std::vector<std::string> to store the results
        
        for (int i = 1; i <= n; ++i) {
            if (i % 15 == 0) {
                result.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                result.push_back("Fizz");
            } else if (i % 5 == 0) {
                result.push_back("Buzz");
            } else {
                // Convert the number to a string if none of the conditions are met
                result.push_back(to_string(i));
            }
        }
        
        return result;
    }
};

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    Solution obj;
    vector<string> ans = obj.fizzBuzz(n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}