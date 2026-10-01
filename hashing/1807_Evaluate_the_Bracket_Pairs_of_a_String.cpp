/* class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) 
    {
        unordered_map<string,string> arr;
        int r = knowledge.size();
        for(int i = 0;i<r;i++)
        {
                string x = knowledge[i][0];
                string y = knowledge[i][1];
                arr[x] = y;
        }
        string ans = "";
        int n = s.length();
        for(int i = 0;i<n;i++)
        {
            char x = s[i];
            if(x != '(')
                ans+=x;
            else
            {
                string key = "";
                int index = i+1;
                char y = s[index];
                while(y != ')')
                {
                    y = s[index];
                    if(y == ')')
                    {
                        index++;
                        break;
                    }
                    else
                    {
                        key += y;
                        index++;
                    }
                }
                if(arr.contains(key))
                    ans += arr[key];
                else
                    ans += '?';
                i = index-1;
            }
        }
        return ans;
    }
}; */
/*
    Question: Evaluate the Bracket Pairs of a String — LeetCode 1807

    Approach:
    - Store each key-value pair in an unordered_map<string, string>.
    - Traverse the input string character by character.
    - When '(' is found, extract the key until ')'.
    - Check whether the key exists in the hashmap.
    - Append its mapped value to the answer, otherwise append '?'.
    - Move the index past the closing parenthesis.

    Time Complexity: O(n) expected
    Space Complexity: O(n)
*/