/* class Solution {
public:
    bool uniformArray(vector<int>& nums1) 
    {
        int n = nums1.size();
        int odd = 0;
        int fail;
        int even = 0;
        for(int i = 0;i<n;i++)
        {
            if(nums1[i]%2==0)
                even++;
            else 
                odd++;
        }
        if(even==n || odd==n)
            return true;
        int mo=INT_MAX;
        int me = INT_MAX;
        for(int i = 0;i<n;i++)
        {
            if(nums1[i]%2==0 && nums1[i]<me)
            {
                me = nums1[i];
            }
            if(nums1[i]%2==1 && nums1[i]<mo)
            {
                mo = nums1[i];
            }
        }
        if(mo<me)
        {
            return true;
        }
        else
        {
            return false;   
        }
    }
}; */
/*
    Question Type: Array / Parity / Greedy / Minimum Element

    Approach:
    Find the smallest even element and the smallest odd element.

    If the smallest odd element is smaller than the smallest
    even element, every even element is greater than the
    smallest odd element, so each even element can be converted
    to odd using the smallest odd element.

    If the smallest even element is smaller than the smallest
    odd element, the required conversion is not possible because
    the subtraction must be at least 1.

    Therefore, the array can be made uniform if:
    minimum odd < minimum even.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/