/* class Solution {
public:
    int largestInteger(vector<int>& nums, int k) 
    {
        int m = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            m = max(m, nums[i]);
        }
        int n = nums.size();
        if(n == 1)
            return nums[0];
        int m1 = INT_MIN;
        int m2 = INT_MIN;
        unordered_map<int,int> ans;
        for(int i = 0; i < n; i++)
            ans[nums[i]]++;
        if(k == n)
            return m;
        if(k == 1)
        {
            int m3 = INT_MIN;

            for(auto x : ans)
            {
                if(x.second == 1)
                    m3 = max(m3, x.first);
            }

            if(m3 == INT_MIN)
                return -1;

            return m3;
        }
        if(ans[nums[0]] == 1)
            m1 = nums[0];
        if(ans[nums[n-1]] == 1)
            m2 = nums[n-1];
        if(m1 == INT_MIN && m2 == INT_MIN)
            return -1;
        return max(m1,m2);
    }
}; */
/*
    Algorithm:
    1. Find the maximum element in the array.
    2. Store the frequency of every element using an unordered_map.
    3. If k == n, there is only one subarray, so the largest
       element is the answer.
    4. If k == 1, every element forms its own subarray.
       Therefore, only elements occurring exactly once can
       be almost missing. Find the largest such element.
    5. For 1 < k < n, only the first and last elements can
       appear in exactly one subarray.
    6. Check whether the first and last elements occur only once.
    7. Return the larger valid candidate.
    8. If neither candidate exists, return -1.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/