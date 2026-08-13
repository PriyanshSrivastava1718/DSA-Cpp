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
