#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> Hash;
        vector<int> ans;
        Hash.clear();
        ans.clear();
        for (int i : nums1)
            Hash[i]++;
        for (int i : nums2)
            if (Hash[i] > 0)
            {
                Hash[i]--;
                ans.push_back(i);
            }
        return ans;
    }
};