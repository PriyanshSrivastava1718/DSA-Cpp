/* // The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int s = 1;
        int e = n;
        int m,ans;
        while(s<=e)
        {
            m = s+(e-s)/2;
            if(isBadVersion(m))
            {
                ans = m;
                e = m-1;
            }
            else if(isBadVersion(m)==false)
            {
                s = m + 1;
            }
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Apply binary search on the versions from 1 to n.
    2. Find the first version for which isBadVersion() returns true.
    3. If the middle version is bad, store it as the possible answer and search
       for an earlier bad version in the left half.
    4. If the middle version is not bad, search in the right half.
    5. Return the first bad version found.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/
