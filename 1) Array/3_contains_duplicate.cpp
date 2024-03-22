#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;

        for (int num : nums)
        {
            if (seen.insert(num).second == false)
                return true;
        }

        return false;
    }
};