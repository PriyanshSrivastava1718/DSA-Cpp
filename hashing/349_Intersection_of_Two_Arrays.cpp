/* class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int> arr;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0;i<n;i++)
        {
            arr[nums1[i]]++;
        }
        vector<int> ans;
        for(auto x : nums2)
        {
            if(arr[x]>0)
            {
                arr[x]=0;
                ans.push_back(x);
            }
        }
        return ans;
    }
}; */
/*
    Question Type: Array / Hashing / Set Intersection

    Approach:
    Use an unordered_map to store the elements of nums1 and their
    frequencies.

    1. Traverse nums1 and store the frequency of each element.
    2. Traverse nums2 and check whether the current element exists
       in the hashmap.
    3. If its frequency is greater than 0, add the element to the
       answer.
    4. Set its frequency to 0 after adding it so that duplicate
       elements are not added again.
    5. Return the resulting intersection.

    Time Complexity: O(n + m) average
    Space Complexity: O(n)
*/