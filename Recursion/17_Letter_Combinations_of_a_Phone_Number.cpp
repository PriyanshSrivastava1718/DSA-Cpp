/* class Solution 
{
private:
    void check(vector<string>& arr,string& digits,string& ans,int i,vector<string>& m)
    {
        if(i>=digits.size())
        {
            arr.push_back(ans);
            return;
        }

        int digit = digits[i] - '0';
        string val = m[digit];
        for(int j = 0;j<val.length();j++)
        {
            ans+=val[j];
            check(arr,digits,ans,i+1,m);
            ans.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) 
    {
        vector<string> m(10);
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";
        vector<string> arr;
        string ans= "";
        int i = 0;

        check(arr,digits,ans,i,m);
        return arr;

    }
}; */
/*
Approach: Backtracking (Recursion)

1. Create a mapping vector to store the corresponding
   letters for each digit from 2 to 9.

2. Start recursion from index 0 of the given digits string.

3. If the current index reaches the size of digits,
   store the generated combination in the result array.

4. Get the corresponding letters of the current digit
   using the mapping vector.

5. Iterate through all available characters:
   - Add the character to the current answer.
   - Recursively process the next digit.
   - Remove the character using pop_back() to backtrack.

6. Repeat until all possible combinations are generated.

Time Complexity: O(4^n * n)
Space Complexity: O(n) Auxiliary Space
Output Space: O(4^n * n)
*/