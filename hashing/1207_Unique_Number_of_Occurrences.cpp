/* class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int> nums;
        for(int i = 0;i<arr.size();i++)
        {
            nums[arr[i]]++;
        }
        unordered_set<int> ans;
        for(auto x : nums)
        {
            if(ans.find(x.second) != ans.end())
                return false;
            ans.insert(x.second);
        }
        return true;
    }
}; */
/*
    LeetCode: 1207 - Unique Number of Occurrences

    Approach:
    - Use an unordered_map to count the frequency of each element.
    - Store each frequency in an unordered_set.
    - If a frequency already exists in the set, occurrences are not unique.
    - Otherwise, insert the frequency and continue.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/