class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0, j = 0;
        vector<int> output(m + n);
        for (int count = 0; count < m + n; ++count)
        {
            if (i == m)
                output.at(count) = nums2.at(j++);
            else if (j == n)
                output.at(count) = nums1.at(i++);
            else
                output.at(count) = nums1.at(i) < nums2.at(j) ? output.at(count) = nums1.at(i++) : output.at(count) = nums2.at(j++);
        }
        nums1 = output;
        return;
    }
};