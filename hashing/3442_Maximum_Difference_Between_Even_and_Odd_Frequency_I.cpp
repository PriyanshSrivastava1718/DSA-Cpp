/* class Solution {
public:
    int maxDifference(string s) 
    {
        unordered_map<char,int> arr;
        int n = s.length();
        for(int i = 0;i<n;i++)
        {
            arr[s[i]]++;
        }
        int a = INT_MIN;
        int b = INT_MAX;
        for(auto x:arr)
        {
            if(x.second%2!=0 && x.second>a)
                a = x.second;
            if(x.second%2==0 && x.second<b)
                b = x.second;
        }
        return a-b;
    }
}; */
/*
    Question Type: Frequency Counting

    Approach:
    - Use a hash map to count the frequency of each character.
    - Find the maximum frequency among characters with odd frequency.
    - Find the minimum frequency among characters with even frequency.
    - Return the difference between the maximum odd frequency and
      minimum even frequency.

    Time Complexity: O(n)
    Space Complexity: O(k), where k is the number of distinct characters.
*/