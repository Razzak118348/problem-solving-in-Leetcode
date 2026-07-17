#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution
{
public:
bool isFreqSame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}

    bool checkInclusion(string s1, string s2)
    {
        // window sliding technique
        int freq[26] = {0};
        for (int i = 0; i < s1.size(); i++)
        {
            int index = s1[i] - 'a'; // ascii value of both characters is subtracted to get the index of the character in the frequency array,,a->0, b->1, c->2, ..., z->25
            freq[index]++;
            // in one line
            // freq[s1[i]-'a']++;
        }
        int windSize = s1.size();
        for (int i = 0; i < s2.size(); i++)
        {
            int windIndex = 0, idx = i;
            int windFreq[26] = {0};
            while (windIndex < windSize && idx < s2.length())
            {
                windFreq[s2[idx] - 'a']++;
                windIndex++;
                idx++;
            }
            if (isFreqSame(freq, windFreq))
            {
                return true;
            }
        }
        return false;
    }
};


int main()
    {
        string s1, s2;
        cout << "Enter first string: ";
        cin >> s1;
        cout << "Enter second string: ";
        cin >> s2;

        Solution obj;
        bool result = obj.checkInclusion(s1, s2);

        if (result)
        {
            cout << "s2 contains a permutation of s1." << endl;
        }
        else
        {
            cout << "s2 does not contain a permutation of s1." << endl;
        }

        return 0;
    };
