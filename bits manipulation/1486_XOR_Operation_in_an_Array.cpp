/* class Solution {
public:
    int xorOperation(int n, int start) 
    {
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            int x = start+2*i;
            ans = ans ^ x;
        }
        return ans;
    }
}; */
/*
    Question Type: Array / Bit Manipulation / XOR

    Approach:
    Generate each value in the sequence using the formula
    start + 2 * i.

    XOR each generated value with the running answer.

    No additional array is required since each value can be
    generated and processed directly.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/