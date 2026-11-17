/* class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        int n = g.size();
        int m = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i = 0;
        int j = 0;
        int ans = 0;
        while(i<n && j<m)
        {
            if(g[i]<=s[j])
            {
                ans++;
                i++;j++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
}; */
/*
LeetCode 455 - Assign Cookies

Approach: Greedy + Sorting + Two Pointers

1. Sort both the greed factor array (g) and cookie size
   array (s) in ascending order.
2. Initialize two pointers:
   - i for children
   - j for cookies
3. Traverse both arrays while elements remain.
4. If the current cookie can satisfy the current child
   (g[i] <= s[j]):
   - Assign the cookie.
   - Increment the answer.
   - Move both pointers forward.
5. Otherwise, the cookie is too small:
   - Move only the cookie pointer forward.
6. Return the total number of content children.

Time Complexity: O(N log N + M log M)
    - Sorting both arrays.
    - Two-pointer traversal takes O(N + M).

Space Complexity: O(1) auxiliary space
    - Excluding the space used internally by sorting.

Key Concepts:
- Greedy Algorithm
- Sorting
- Two Pointers
*/