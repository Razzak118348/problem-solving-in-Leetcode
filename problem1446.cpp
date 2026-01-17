#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int maxPower(string s) {
        int maxCount = 1;
        int currentCount = 1;

        for (size_t i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1]) {
                currentCount++;
            } else {
                maxCount = max(maxCount, currentCount);
                currentCount = 1;
            }
        }
        maxCount = max(maxCount, currentCount);

        return maxCount;
    }
};

int main(){

    string s;
    cout<<"Enter the string: ";
    cin>>s;

    Solution obj;
    int ans = obj.maxPower(s);

    cout << "The maximum length of a non-empty substring that contains only one unique character is: " << ans << endl;

    return 0;
}
