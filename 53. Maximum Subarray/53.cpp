#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int MAX = nums.at(0);
        int sum, part_MAX;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum = nums.at(i);
            part_MAX = nums.at(i);
            for (int j = i + 1; j < nums.size(); ++j)
            {
                part_MAX = max(sum, sum + nums.at(j));
                MAX = max(MAX, part_MAX);
                sum = sum + nums.at(j);
                //cout << i << " " << j << " " << sum <<" " << part_MAX<<" "<<MAX<<endl;
                if (sum < 0 && sum - nums.at(j) < 0)
                    break;
            }
            MAX = max(MAX, part_MAX);
            //cout << i <<endl;
        }
        return MAX;
    }
};
// Time Complexity T(n) = n log n