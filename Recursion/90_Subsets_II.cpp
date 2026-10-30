/* class Solution {
private:
    void check(vector<int>& nums,vector<int>& ans,vector<vector<int>>& result,int i,set<vector<int>>& st)
    {
        if(i>=nums.size())
        {
            if(!(st.find(ans) != st.end()))
            {
                result.push_back(ans);
                st.insert(ans);
            }
            return;
        }
        
        check(nums,ans,result,i+1,st);

        ans.push_back(nums[i]);

        check(nums,ans,result,i+1,st);

        ans.pop_back();
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        set<vector<int>> st;
        vector<int> ans;
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int i = 0;

        check(nums,ans,result,i,st);

        return result;
    }
}; */
/*
LeetCode 90: Subsets II

Approach: Recursion (Pick / Not Pick) + Sorting + Set

1. Sort the input array to maintain a consistent order
   in generated subsets.
2. Use Pick / Not Pick recursion to generate all possible
   subsets.
3. At the base case, check whether the current subset
   already exists in the set.
4. If it is unique, insert it into the result vector
   and the set.
5. The set prevents duplicate subsets.

Time Complexity: O(2^n * n * log(2^n))
Space Complexity: O(2^n * n)
*/