/*
    LeetCode: 771 - Jewels and Stones

    Approach:
    - Use an unordered_map to count the frequency of each stone.
    - Traverse the jewels string and add the frequency of each jewel
      to the total count.

    Time Complexity: O(n + m)
    Space Complexity: O(n)
*/
/* 
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        unordered_map<char,int> ans;
        int same = 0;

        for(int i = 0; i < stones.length(); i++)
        {
            ans[stones[i]]++;
        }

        for(auto x : jewels)
        {
            same = same + ans[x];
        }

        return same;
    }
}; 
*/