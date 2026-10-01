/* class Solution {
public:
    string intToRoman(int num) 
    {
        string ans = "";
        while(num - 1000 >= 0)
        {
            ans += 'M';
            num -= 1000;
        }
        while(num - 900 >= 0)
        {
            ans += "CM";
            num -= 900;
        }
        while(num - 500 >= 0)
        {
            ans += 'D';
            num -= 500;
        }
        while(num - 400 >= 0)
        {
            ans += "CD";
            num -= 400;
        }
        while(num - 100 >= 0)
        {
            ans += 'C';
            num -= 100;
        }
        while(num - 90 >= 0)
        {
            ans += "XC";
            num -= 90;
        }
        while(num - 50 >= 0)
        {
            ans += 'L';
            num -= 50;
        }
        while(num - 40 >= 0)
        {
            ans += "XL";
            num -= 40;
        }
        while(num - 10 >= 0)
        {
            ans += 'X';
            num -= 10;
        }
        while(num - 9 >= 0)
        {
            ans += "IX";
            num -= 9;
        }
        while(num - 5 >= 0)
        {
            ans += 'V';
            num -= 5;
        }
        while(num - 4 >= 0)
        {
            ans += "IV";
            num -= 4;
        }
        while(num - 1 >= 0)
        {
            ans += 'I';
            num -= 1;
        }
        return ans;
    }
}; */
/*
    Question: Integer to Roman — LeetCode 12

    Approach:
    - Use a greedy approach with Roman numeral values in descending order.
    - Repeatedly subtract the largest possible value from num.
    - Handle subtractive cases directly: 900, 400, 90, 40, 9, and 4.
    - Append the corresponding Roman numeral to the answer.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/