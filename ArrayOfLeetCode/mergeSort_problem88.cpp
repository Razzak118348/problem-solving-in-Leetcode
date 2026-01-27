#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                cout<< "Placing " << nums1[i] << " from nums1 at index " << k << endl;
                i--;
            } else {
                nums1[k] = nums2[j];
                cout<< "Placing " << nums2[j] << " from nums2 at index " << k << endl;
                j--;
            }
            k--;
        }

        // If nums2 still has elements left that need to be merged
        while (j >= 0) {
            nums1[k] = nums2[j];
            cout<< "Placing " << nums2[j] << " from nums2 at index " << k << endl;
            j--;
            k--;
        }
    }
    };

 int main() {
    //two sorted non-decreasing arrays
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    int m = 3;
    int n = 3;

    Solution obj;
    obj.merge(nums1, m, nums2, n);

    for (int x : nums1) {
        cout << x << " ";
    }
    return 0;
}