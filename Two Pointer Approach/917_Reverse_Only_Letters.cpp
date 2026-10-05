/* class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        int n = s.length();
        int left = 0;
        int right = n-1;   
        while(left < right)
        {
            if(!isalpha(s[left]))
                left++;
            else if(!isalpha(s[right]))
                right--;
            else
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        } 
        return s;
    }
}; */
/*
    Question: Reverse Only Letters — LeetCode 917

    Approach:
    - Use two pointers, one from the beginning and one from the end.
    - Move the left pointer forward until it reaches a letter.
    - Move the right pointer backward until it reaches a letter.
    - Swap the two letters and move both pointers inward.
    - Non-letter characters remain in their original positions.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/