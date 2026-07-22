/* 
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set<char> subs; //hashset to check unique char
        int count = 0,ans=0;
        for(int i = 0;i<s.length();i++)     //check for all possible char
        {
            subs.clear();       //clear every iterative 
            for(int j = i; j < s.length(); j++)     //each possible substring for each char 
            {
                if(subs.find(s[j])!=subs.end())     //check if element already exists
                {
                    ans = max(count,ans);    
                    break;
                }
                else            //if element is unique
                {
                    count++;
                    subs.insert(s[j]);      
                }
            }
            ans = max(ans,count);   
            count = 0;      //reset counter 
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