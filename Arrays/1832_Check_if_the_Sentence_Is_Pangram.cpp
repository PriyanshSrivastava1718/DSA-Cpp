/* class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        vector<int> arr(26);
        for(int i = 0;i<26;i++)
        {
            arr[i] = 0;
        }
        int n = sentence.length();
        for(int i = 0;i<n;i++)
        {
            char x = sentence[i];
            int index = int(x) - 97;
            arr[index] = 1;
        }
        for(int i = 0;i<26;i++)
        {
            if(arr[i]==0)
                return false;
        }
        return true;
    }
}; */
/*
    Question Type: Frequency / Fixed-Size Array

    Approach:
    - Since the sentence contains lowercase English letters, use a fixed
      array of size 26.
    - Convert each character to its alphabet index using ASCII values.
    - Mark the corresponding index as 1 when the character is present.
    - Finally, check all 26 positions.
    - If any position is still 0, the sentence is not a pangram.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/