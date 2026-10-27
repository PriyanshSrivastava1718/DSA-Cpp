/* class Solution 
{
public:
bool isIsomorphic(string s, string t) 
{
    int hash[256] = {0};
    bool isTCharMapped[256] = {false};
    for (int i = 0; i < s.size(); i++) 
    {
        unsigned char sc = s[i];
        unsigned char tc = t[i];
        if (hash[sc] == 0 && !isTCharMapped[tc]) 
        {
            hash[sc] = tc;
            isTCharMapped[tc] = true;
        }
        else if (hash[sc] != tc) 
        {
            return false;
        }
    }
    return true;
}
};
 */
/*
Problem: 205. Isomorphic Strings
Platform: LeetCode
Topic: Hashing, Arrays, Character Mapping

Approach:

* Create a hash array to store the mapping from characters in s to characters in t.
* Use a boolean array to track whether a character in t has already been mapped.
* Traverse both strings simultaneously.
* If neither character is mapped, establish the mapping and mark the target character as mapped.
* Otherwise, verify that the existing mapping matches the current character in t.
* If the mapping is inconsistent, return false.
* If all characters satisfy the mapping rules, return true.

Time Complexity: O(n)
Space Complexity: O(1) — fixed-size arrays of 256 elements.

Key Learning:
Isomorphic strings require a consistent one-to-one mapping between characters.
*/
