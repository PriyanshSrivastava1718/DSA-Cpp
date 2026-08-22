/* class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int minc = 0;
        int maxc = 0;
        for(int i =0;i<weights.size();i++)
        {
            minc = max(minc,weights[i]);        //minimum capacity required 
            maxc += weights[i];     //atmost capacity 
        }
        //now we can use binary search to check required capacity 
        int s = minc;
        int e = maxc;
        int m;
        while(s<e)
        {
            m = s + (e-s)/2;
            int d = 1;
            int cap = 0;
            for(int i =0;i<weights.size();i++)
            {
                if(cap+weights[i]>m)
                {
                    d++;
                    cap = weights[i];
                }
                else
                    cap += weights[i];
            }
            if (d>days)
                s = m + 1;
            else 
                e = m;
        }
        return s;
    }
}; */
/*
    Pattern: Binary Search on Answer

    Algorithm:
    1. Find the minimum possible capacity by taking the maximum
       weight, because the ship must be able to carry every package.
    2. Find the maximum possible capacity by taking the sum of all
       weights, which allows all packages to be shipped in one day.
    3. Binary search between these two values.
    4. For every possible capacity (mid), count how many days are
       required to ship all the packages.
    5. If the required days are more than the given days, the capacity
       is too small, so search on the right side.
    6. Otherwise, the capacity is valid, so try to find a smaller
       valid capacity.
    7. When the search ends, s represents the minimum required capacity.

    Time Complexity: O(n log(sum(weights)))
    Space Complexity: O(1)
*/