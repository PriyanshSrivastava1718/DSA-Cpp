/* class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) 
    {
        int n = arr.size();
        int INF = INT_MAX;
        vector<int> left(n, INF);
        unordered_map<int,int> mp;
        int prefix = 0;
        int best = INF;
        int ans = INF;
        mp[0] = -1;
        for(int i = 0; i < n; i++)
        {
            prefix += arr[i];
            if(mp.find(prefix - target) != mp.end())
            {
                int start = mp[prefix - target] + 1;
                int len = i - start + 1;
                if(start > 0 && left[start - 1] != INF)
                    ans = min(ans, len + left[start - 1]);

                best = min(best, len);
            }
            left[i] = best;
            mp[prefix] = i;
        }
        return ans == INF ? -1 : ans;
    }
}; */
/*
    Question Type: Two Non-overlapping Sub-arrays With Target Sum

    Approach:
    - Use prefix sums to identify subarrays whose sum is equal to `target`.
    - Store the latest index for each prefix sum in a hash map.
    - `left[i]` stores the minimum length of a valid target-sum subarray
      ending at or before index `i`.
    - Whenever a target-sum subarray is found, check whether a valid
      subarray exists completely before its starting index.
    - Combine their lengths and keep the minimum answer.
    - If no two non-overlapping subarrays exist, return `-1`.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/