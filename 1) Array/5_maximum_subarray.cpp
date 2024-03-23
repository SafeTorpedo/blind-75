#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int ans = INT_MIN, sum = 0;

        for (int num : nums)
        {
            sum += num;
            ans = max(ans, sum);
            sum = max(sum, 0);
        }

        return ans;
    }
};