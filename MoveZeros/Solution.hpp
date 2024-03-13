#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
    public:
    void moveZeroes(std::vector<int>& nums)
    {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while (i < n)
        {
            if (nums[i] != 0)
            {
                std::swap(nums[i], nums[j]);
                j++;
            }
            i++;
        }
    }
};