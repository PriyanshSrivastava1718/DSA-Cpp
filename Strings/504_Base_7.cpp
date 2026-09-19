/* class Solution {
public:
    string convertToBase7(int num) 
    {
        string ans = "";
        int save = num;
        if(num < 0)
        {
            ans += "-";
            num = -num;
        }
        if(num==0)
            return "0";
        int p = 0;
        while(num != 0)
        {
            int digit = num % 7;
            ans += char('0' + digit);
            num /= 7;
        }
        if(save>0)
            reverse(ans.begin(),ans.end());
        else
            reverse(ans.begin()+1,ans.end());
        return ans;
    }
}; */
/*
    Question Type: Decimal to Base Conversion

    Approach:
    - Handle negative numbers by storing the sign and converting the
      number to its positive value.
    - Repeatedly divide the number by 7.
    - Store each remainder as a character in `ans`.
    - The remainders are generated from right to left, so reverse them
      at the end.
    - For negative numbers, keep `-` at index 0 and reverse only the
      digits.
    - Handle 0 separately.

    Time Complexity: O(log₇(n))
    Space Complexity: O(log₇(n))
*/