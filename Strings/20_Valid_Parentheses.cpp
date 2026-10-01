/* class Solution {
public:
    bool isValid(string s) 
    {
        int n = s.length();
        vector<char> arr;

        if(n % 2 != 0)
            return false;

        for(int i = 0; i < n; i++)
        {
            char x = s[i];

            if(x == '(' || x == '{' || x == '[')
            {
                arr.push_back(x);
            }
            else
            {
                if(arr.empty())
                    return false;

                if(x == ')' && arr.back() != '(')
                    return false;

                if(x == '}' && arr.back() != '{')
                    return false;

                if(x == ']' && arr.back() != '[')
                    return false;

                arr.pop_back();
            }
        }
        return arr.empty();
    }
}; */
/*
    Question: Valid Parentheses — LeetCode 20

    Approach:
    - Use a vector as a stack to store opening brackets.
    - Push every opening bracket onto the stack.
    - For each closing bracket, check whether it matches the
      most recently opened bracket using arr.back().
    - Pop the matched opening bracket.
    - Return false for an unmatched/mismatched closing bracket.
    - The stack must be empty at the end for the string to be valid.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/