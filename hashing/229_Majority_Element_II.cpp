/* class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> arr;
        for(int i = 0;i<n;i++)
        {
            arr[nums[i]]++;
        }
        for(auto x : arr)   //auto is a keyword for any datatype this case key/value pair
        {
            if(x.second>n/3)
                ans.push_back(x.first);
        }
        return ans;
    }
}; */
/*
    Question Type: Array / Hash Map / Frequency Counting

    Approach:
    Use an unordered_map to store the frequency of each element
    in the array.

    1. Traverse the array and count the occurrences of every element.
    2. Traverse through the key-value pairs of the hash map.
    3. If the frequency of an element is greater than n/3,
       add that element to the answer vector.
    4. Return the elements satisfying the condition.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/