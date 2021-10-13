#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; ++i)
            for (int j = i + 1; j < nums.size(); ++j)
                if (nums.at(i) == nums.at(j))
                    return true;
        return false;
    }
};

// Time Limit Exceeded (TLE)
// O(n) = n ^ 2