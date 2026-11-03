/* class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        int n = strs.size();
        unordered_map<string,vector<string>> mp;
        for(int i = 0;i<n;i++)
        {
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
}; */
/*
    LeetCode 49 - Group Anagrams

    Approach:
    1. Create an unordered_map where the key is a sorted version of each string
       and the value is a vector containing all strings with that sorted form.
    2. Iterate through the input vector of strings.
    3. For each string, create a copy and sort its characters.
    4. Use the sorted string as the key and push the original string into
       the corresponding vector.
    5. Traverse the map and add each group's vector to the answer.

    Time Complexity: O(n * k log k)
        - n = number of strings
        - k = maximum length of a string

    Space Complexity: O(n * k)
        - Stores all strings in the unordered_map and answer.
*/