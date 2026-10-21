/* class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) 
    {
        unordered_map<string,int> w1;
        unordered_map<string,int> w2;
        int n = words1.size();
        int m = words2.size();
        for(int i = 0;i<n;i++)
        {
            w1[words1[i]]++;
        }
        for(int i = 0;i<m;i++)
        {
            w2[words2[i]]++;
        }
        int ans = 0;
        for(auto x:words1)
        {
            if(w2[x]>1 || w2[x]<1)
                continue;
            else if(w1[x]>1)
                continue;
            ans++;
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Create two unordered maps, w1 and w2, to store the frequency
       of each word in words1 and words2, respectively.
    2. Traverse words1 and increment the frequency of each word in w1.
    3. Traverse words2 and increment the frequency of each word in w2.
    4. Iterate through words1:
       - If the word's frequency in w2 is not 1, skip it.
       - If the word's frequency in w1 is greater than 1, skip it.
       - Otherwise, increment ans.
    5. Return ans, the number of words appearing exactly once in both arrays.

    Time Complexity: O(n + m) average
    Space Complexity: O(n + m)

    Where n and m are the sizes of words1 and words2, respectively.
*/