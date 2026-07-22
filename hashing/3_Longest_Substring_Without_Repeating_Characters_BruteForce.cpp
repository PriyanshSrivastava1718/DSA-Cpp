/* 
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set<char> subs;
        int count = 0,ans=0;
        for(int i = 0;i<s.length();i++)
        {
            subs.clear();
            for(int j = i; j < s.length(); j++)
            {
                if(subs.find(s[j])!=subs.end())
                {
                    ans = max(count,ans);    
                    break;
                }
                else
                {
                    count++;
                    subs.insert(s[j]);
                }
            }
            ans = max(ans,count);
            count = 0;
        }
        return ans;
    }
};
*/
/*
Approach: Brute Force + Hash Set

Time Complexity: O(n²)
Space Complexity: O(min(n, charset))

Note:
This is my initial brute-force implementation while learning strings.
I'll revisit this problem later after learning the Sliding Window technique.
*/