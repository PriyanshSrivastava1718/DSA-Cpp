/* class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
        while(s.find(part)!= string::npos)
        {
            int index = s.find(part);
            s.erase(index,part.size());
        }
        return s;
    }
}; */
/*
    Question Type: String Manipulation

    Approach:
    - Repeatedly search for the occurrence of `part` in `s`.
    - If found, store its starting index.
    - Erase `part` from that index.
    - Continue until `part` no longer exists in the string.
    - Return the resulting string.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/