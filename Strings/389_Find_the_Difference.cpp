/* class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        vector<char> arr(26,0);
        for(auto x:t)
        {
            arr[x-'a']++;
        }
        for(auto x:s)
        {
            arr[x-'a']--;
        }
        for(int i = 0;i<26;i++)
            if(arr[i]==1)
            {
                char x = i+'a';
                return x;
            }
        return ' ';
    }
}; */
/*
LeetCode 389: Find the Difference

Approach: Frequency Counting

* Create an array of size 26 to store lowercase letter frequencies.
* Increment the frequency of every character in string t.
* Decrement the frequency of every character in string s.
* The extra character will have a remaining frequency of 1.
* Convert its array index back into a character and return it.

Time Complexity: O(n), where n is the length of s.
Auxiliary Space: O(1), since the frequency array has a fixed size of 26.

Key Learning:
Frequency counting tracks how many times each character occurs,
unlike marking, which only records whether a character exists.
*/
