/* class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) 
    {
        vector<int> ans;
        int i = num.size() - 1;
        int carry = 0;
        while(i >= 0 || k > 0 || carry > 0)
        {
            int digit = 0;
            if(i >= 0)
            {
                digit = num[i];
                i--;
            }
            int kdigit = k % 10;
            k /= 10;
            int sum = digit + kdigit + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
}; */
/*
    Question Type: Array / Simulation / Digit-by-Digit Addition

    Approach:
    The array can contain up to 10,000 digits, so the entire number
    cannot be converted into an integer or long long.

    Process the addition from right to left, just like normal
    manual addition.

    1. Start from the last digit of num.
    2. Extract the current digit of k using k % 10.
    3. Add the digits along with any carry.
    4. Store the current digit using sum % 10.
    5. Calculate the carry using sum / 10.
    6. Continue while there are still digits in num, digits in k,
       or a remaining carry.
    7. Since digits are generated from right to left, reverse the
       result at the end.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/