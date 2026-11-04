/* class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        int n = deck.size();
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i<n;i++)
        {
            mp[deck[i]].push_back(deck[i]);
        }
        int ans = INT_MIN;
        for(auto x:mp)
        {
            if(ans == INT_MIN)
                ans = x.second.size();
            else
                ans = gcd(ans,x.second.size());
        }
        return ans > 1;
    }
}; */
/*
Problem: LeetCode 914 - X of a Kind in a Deck of Cards

Approach:
1. Use an unordered_map to store the frequency of each card.
2. Calculate the GCD of all frequencies.
3. If the GCD is greater than 1, we can divide all cards
   into groups of equal size X, where X > 1.
4. Otherwise, return false.

Key Concept:
The GCD of all card frequencies must be greater than 1.

Time Complexity: O(N + K log N)
- O(N) to build the frequency map.
- GCD calculations across K distinct card frequencies.

Space Complexity: O(N)
- Unordered map stores card frequencies.
*/