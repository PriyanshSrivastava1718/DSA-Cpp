/* class Solution {
public:
    bool isPalindrome(string s) 
    {
        int n = s.length();
        if(n==1)
            return true;
        int st = 0, e = n - 1;

        while(st <= e)
        {
            if(!isalnum(s[st]))
            {    
                st++;
                continue;
            }    

            if(!isalnum(s[e]))
            {
                e--;
                continue;
            }
            
            if(tolower(s[st]) != tolower(s[e]))
                return false;
            st++;
            e--;
        }

        return true;
    }
}; */
/*
    Question Type: String / Two Pointers / Character Validation

    Approach:
    Use two pointers, one starting from the beginning and one
    from the end of the string.

    1. Ignore characters that are not alphanumeric using isalnum().
    2. If the left character is invalid, move the left pointer
       and restart the iteration.
    3. If the right character is invalid, move the right pointer
       and restart the iteration.
    4. Convert both valid characters to lowercase using tolower()
       and compare them.
    5. If they are different, the string is not a palindrome.
    6. If they match, move both pointers inward.
    7. Continue until the pointers meet or cross.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/