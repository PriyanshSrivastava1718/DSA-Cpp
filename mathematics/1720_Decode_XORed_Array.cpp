/* class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        int n = encoded.size();
        vector<int> ans(n+1);
        ans[0] = first;
        for(int i = 0;i<n;i++)
        {
            int x = i+1;
            ans[x] = encoded[i] ^ ans[i];
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Create an answer array of size n+1, where n is the size of the encoded array.
    2. Store the given first element at ans[0].
    3. Traverse the encoded array from index 0 to n-1.
    4. Use the XOR property to decode the next element:
       ans[i+1] = encoded[i] ^ ans[i].
    5. Repeat until all elements are decoded.
    6. Return the answer array.

    Time Complexity: O(n)
    Space Complexity: O(n)

    Where n is the size of the encoded array.
*/