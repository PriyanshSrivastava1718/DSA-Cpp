/* class Solution {
public:
    int minInsertions(string s) {
        int insertions = 0;
        int neededRight = 0;

        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] == '(') 
            {
                neededRight += 2;
                if (neededRight % 2 == 1) 
                {
                    insertions++;
                    neededRight--;
                }
            } 
            else 
            {
                neededRight--;
                if (neededRight < 0) 
                {
                    insertions++;
                    neededRight += 2;
                }
            }
        }
        return insertions + neededRight;
    }
}; */
/*
    Question: Minimum Insertions to Balance a Parentheses String — LeetCode 1541

    Approach:
    - Track the number of closing parentheses needed using neededRight.
    - Each '(' requires two consecutive ')' characters.
    - If neededRight becomes odd after an opening bracket, insert one ')' to
      maintain valid pairing.
    - For each ')', decrease neededRight.
    - If neededRight becomes negative, insert one '(' and adjust the count.
    - At the end, add the remaining neededRight to the insertion count.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/