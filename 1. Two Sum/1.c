

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *output = (int *)malloc(2 * sizeof(int));
    *returnSize = 2;
    for (output[0] = 0;; ++output[0])
    {
        int tar = target - nums[output[0]];
        for (output[1] = numsSize - 1; output[0] < output[1]; --output[1])
        {
            if (tar == nums[output[1]])
            {
                return output;
            }
        }
    }
    return NULL;
}