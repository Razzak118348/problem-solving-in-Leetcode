#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
        }
        cout<<i<<" th index insert first index 0 for condition digits[digits.size()-1]==9"<<endl;
            digits[i] = 0;
        }
        cout<<"All digits are 9, need to insert 1 at the beginning"<<endl;
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution sol;
    vector<int> digits = {9};
    vector<int> result = sol.plusOne(digits);

    cout << "Result after plus one: ";
    for (int i =0;i<result.size();i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}