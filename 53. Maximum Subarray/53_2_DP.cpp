#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int current = nums[0];
        int results = nums[0];
        int sizevec = nums.size();
        for (int i = 1; i < sizevec; ++i)
        {
            if (current < 0)
                current = nums[i];
            else
                current += nums[i];
            results = current > results ? current : results;
        }
        return results;
    }
};
// Time Complexity T(n) = n
// Dynamic Programming