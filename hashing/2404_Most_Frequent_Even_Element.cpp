/* class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int> arr;
        for(int i = 0;i<n;i++)
        {
            arr[nums[i]]++;
        }
        int p = -1;
        int freq = INT_MIN;
        for(auto x:arr)
        {
            if(x.first%2!=0)
                continue;
            if(x.second > freq)
            {
                freq = x.second;
                p = x.first;
            }
            if(x.second==freq)
            {
                p = min(p,x.first);
            }
        }
        return p;
    }
}; */
/*
    Question Type: Array / Hashing / Frequency Counting

    Approach:
    Use an unordered_map to store the frequency of each element.

    1. Traverse the array and count the frequency of every number.
    2. Traverse through the hashmap and ignore odd numbers.
    3. For even numbers, keep track of the element with the
       highest frequency.
    4. If two even numbers have the same frequency, choose
       the smaller number.
    5. If no even number exists, return -1.

    Time Complexity: O(n) average
    Space Complexity: O(n)
*/