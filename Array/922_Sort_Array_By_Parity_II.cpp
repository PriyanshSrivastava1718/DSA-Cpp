/* class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums)
    {
        int s = 0;
        int o = 1;
        int n = nums.size();
        while (s < n && o < n)
        {
            if (nums[s] % 2 == 0)
            {
                s += 2;
            }
            else if (nums[o] % 2 == 1)
            {
                o += 2;
            }
            else
            {
                swap(nums[s], nums[o]);
                s += 2;
                o += 2;
            }
        }
        return nums;
    }
}; */