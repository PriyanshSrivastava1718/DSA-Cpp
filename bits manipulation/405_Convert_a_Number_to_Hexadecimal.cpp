/* class Solution
{
    public:
    string toHex(int num)
    {
        if(num == 0)
            return "0";
        string ans = "";
        string hex = "0123456789abcdef";
        unsigned int n = static_cast<unsigned int>(num);
        while(n != 0)
        {
            int x = n & 15;
            ans += hex[x];
            n >>= 4;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
 */
/*
LeetCode 405: Convert a Number to Hexadecimal

Approach: Bit Manipulation

1. Handle num == 0 separately.
2. Convert num to unsigned int to process negative numbers
   using their 32-bit representation.
3. Use n & 15 to extract the last 4 bits, giving a value
   between 0 and 15.
4. Use the lookup string "0123456789abcdef" to map the
   extracted value to its hexadecimal character.
5. Right-shift n by 4 bits (n >>= 4) to process the next
   hexadecimal digit.
6. Reverse the result because digits are extracted from
   least significant to most significant.

Time Complexity: O(1) — at most 8 hexadecimal digits for a
32-bit integer.
Space Complexity: O(1) — the result contains at most 8 digits.
*/
