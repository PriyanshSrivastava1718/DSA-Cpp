/* class Solution 
{
private:
    void adding(string& num1,string& num2,int i,int j,string& ans,int& carry)
    {
        if(i<0 && j<0)
        {
            if(carry == 0)
                return; 
            ans += carry + '0';
            return;
        }

        if(i<0 && j>=0)
        {
            int add;
            int x = num2[j] - '0';
            x = x + carry;

            if(x>=10)
            {
                add = x%10;
                x/=10;
                carry = x;
            }
            else
            {
                add = x;
                carry = 0;
            }

            ans += add + '0';
            adding(num1,num2,i,j-1,ans,carry);
        }
        else if(i>=0 && j<0)
        {
            int add;
            int x = num1[i] - '0';
            x = x + carry;

            if(x>=10)
            {
                add = x%10;
                x/=10;
                carry = x;
            }
            else
            {
                add = x;
                carry = 0;
            }

            ans += add + '0';
            adding(num1,num2,i-1,j,ans,carry);
        }
        else
        {
            int add;
            int x = num1[i] - '0';
            int y = num2[j] - '0';
            x = x + y + carry;
            if(x>=10)
            {
                add = x%10;
                x/=10;
                carry = x;
            }
            else
            {
                add = x;
                carry = 0;
            }
            ans+=add+'0';
            adding(num1,num2,i-1,j-1,ans,carry);
        }
    }

public:
    string addStrings(string num1, string num2) 
    {
        string ans = "";
        int carry = 0;
        int i = num1.length()-1;
        int j = num2.length()-1;
        adding(num1,num2,i,j,ans,carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
}; */
/*
    LeetCode 415 - Add Strings

    Approach:
    1. Use recursion to add digits starting from the last index of both strings.
    2. Maintain two pointers i and j to traverse both strings.
    3. Extract individual digits and add them along with the carry.
    4. If the sum is >= 10, store the remainder and update the carry.
    5. Handle cases where either string gets exhausted before the other.
    6. Stop when both pointers are exhausted.
    7. Append any remaining carry and reverse the answer string.

    Time Complexity: O(max(n, m))
    Space Complexity: O(max(n, m)) - Recursion Stack
*/