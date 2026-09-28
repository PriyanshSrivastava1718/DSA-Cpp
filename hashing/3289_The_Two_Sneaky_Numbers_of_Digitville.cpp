/* class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums)
    {
        vector<int> ans(2);
        int n = nums.size();
        int i = 0;
        unordered_map<int,int> m;
        for(int i = 0;i<n;i++)
            m[nums[i]]++;
        for(auto x:m)
        {
            if(x.second > 1)
            {    
                ans[i] = x.first;
                i++;
            }
        }
        return ans;
    }
}; */
/*
    Question: The Two Sneaky Numbers of Digitville — LeetCode 3289

    Approach:
    - Use an unordered_map to store the frequency of each number.
    - Traverse the map and collect the two numbers whose frequency is greater than 1.
    - The problem guarantees exactly two numbers appear twice.

    Time Complexity: O(n) expected
    Space Complexity: O(n)
*/