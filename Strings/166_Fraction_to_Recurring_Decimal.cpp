/* class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) 
    {
        if (numerator == 0) 
            return "0";
        string result;
        if ((numerator < 0) ^ (denominator < 0)) 
        {
            result += "-";
        }
        long long num = labs((long long)numerator);
        long long den = labs((long long)denominator);
        result += to_string(num / den);
        long long remainder = num % den;
        if (remainder == 0) 
            return result;
        result += ".";
        unordered_map<long long, int> remainderMap;
        while (remainder != 0) 
        {
            if (remainderMap.find(remainder) != remainderMap.end()) 
            {
                result.insert(remainderMap[remainder], "(");
                result += ")";
                break;
            }
            remainderMap[remainder] = result.length();
            remainder *= 10;
            result += to_string(remainder / den);
            remainder %= den;
        }
        return result;
    }
}; */
/*
    Question Type: Math / String / Hashing / Simulation

    Approach:
    Convert the fraction into its integer and decimal parts while
    handling negative values safely using long long.

    1. Determine the sign of the result.
    2. Calculate the integer part using num / den.
    3. Find the remainder using num % den.
    4. If the remainder is 0, return the integer part directly.
    5. Otherwise, simulate decimal division by repeatedly multiplying
       the remainder by 10.
    6. Store each remainder in a hashmap along with the position where
       its corresponding decimal digit starts.
    7. If the same remainder appears again, the decimal sequence has
       started repeating.
    8. Insert '(' at the first occurrence of that remainder and append
       ')' at the end of the repeating sequence.

    Time Complexity: O(n)
    Space Complexity: O(n)

    where n is the number of digits generated in the decimal representation.
*/