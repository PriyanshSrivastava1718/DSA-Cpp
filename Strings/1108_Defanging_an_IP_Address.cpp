/* class Solution {
public:
    string defangIPaddr(string address) 
    {
        string result = "";
        for (int i = 0; i < address.length(); i++) 
        {
            if (address[i] == '.') 
            {
                result += "[.]";
            } 
            else 
            {
                result += address[i];
            }
        }
        return result;
    }
}; */
/*
    Question Type: String / String Manipulation

    Approach:
    Traverse through the IP address string character by character.

    1. If the current character is '.', add "[.]" to the result.
    2. Otherwise, add the current character as it is.
    3. Return the modified string.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/