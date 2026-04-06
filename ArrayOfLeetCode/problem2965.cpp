#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n;

        vector<int> freq(total + 1, 0);

        // Count frequency
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
            }
        }

        int duplicate = -1, missing = -1;

        // Find duplicate and missing
        for (int i = 1; i <= total; i++) {
            if (freq[i] == 2) duplicate = i;
            else if (freq[i] == 0) missing = i;
        }

        return {duplicate, missing};
    }
};

int main(){
    Solution sol;
    vector<vector<int>> grid = {{1, 2}, {2, 4}};
    vector<int> result = sol.findMissingAndRepeatedValues(grid);

    cout << "Duplicate: " << result[0] << ", Missing: " << result[1] << endl;

    return 0;
}