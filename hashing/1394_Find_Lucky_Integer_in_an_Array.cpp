/* class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int n = arr.size();
        unordered_map<int,int> nums;
        for(int i = 0;i<n;i++)
        {
            nums[arr[i]]++;
        }
        int ans = INT_MIN;
        for(auto i : nums)
        {
            if(i.first == i.second)
            {
                if(i.first>ans)
                    ans = i.first;
            }
        }
        if(ans == INT_MIN)
            return -1;
        return ans;
    }
}; */
/*
    Question Type: Array / Hashing / Frequency Counting

    Approach:
    Use an unordered_map to store the frequency of each number.

    1. Traverse the array and count the frequency of every element.
    2. Traverse through the hashmap and check whether the element's
       value is equal to its frequency.
    3. If it is a lucky number, keep track of the largest one.
    4. If no lucky number exists, return -1.

    Repeated elements are counted separately while building the
    frequency map.

    Time Complexity: O(n) average
    Space Complexity: O(n)
*/