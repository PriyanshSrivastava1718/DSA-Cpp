/* class Solution {
public:
    int findMinDifference(vector<string>& arr) 
    {
        int n = arr.size();
        vector<int> mini(n);
        for(int i = 0;i<n;i++)
        {
            string x = arr[i];
            int hr = stoi(x.substr(0,2));
            int minu = stoi(x.substr(3,2));
            mini[i] = hr*60 + minu;
        }   
        sort(mini.begin(),mini.end());  
        int x = (1440-mini[n-1])+mini[0];
        int ans = x;
        for(int  i = 0;i<n-1;i++)
        {
            int diff = abs(mini[i]-mini[i+1]);
            ans = min(ans,diff);
        }
        return ans;
    }
}; */
/*
    Question Type: Minimum Time Difference

    Approach:
    - Convert each time from HH:MM format into minutes from midnight.
    - Sort all converted time values.
    - Check the difference between every pair of adjacent times.
    - Since the clock is circular, also check the difference between
      the last time and the first time across midnight.
    - Return the minimum difference found.

    Time Complexity: O(n log n)
    Space Complexity: O(n)
*/