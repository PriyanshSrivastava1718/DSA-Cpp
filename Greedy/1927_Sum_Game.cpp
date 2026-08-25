/* class Solution {
public:
    bool sumGame(std::string num) {
        int n = num.size();
        int sumDiff = 0;
        int qDiff = 0;

        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                if (num[i] == '?') {
                    qDiff++;
                } else {
                    sumDiff += (num[i] - '0');
                }
            } else {
                if (num[i] == '?') {
                    qDiff--;
                } else {
                    sumDiff -= (num[i] - '0');
                }
            }
        }

        return (sumDiff * 2 != -qDiff * 9);
    }
}; */
/*
    Algorithm:
    1. Divide the string into two equal halves.
    2. Maintain sumDiff as the difference between the digit sums
       of the left and right halves.
    3. Maintain qDiff as the difference between the number of
       '?' characters in the left and right halves.
    4. For every digit, add it to the appropriate half's sum.
    5. For every '?', increase qDiff for the left half and
       decrease it for the right half.
    6. Each '?' can contribute a value from 0 to 9.
    7. The game is balanced only when the existing sum difference
       can be exactly compensated by the '?' characters.
    8. Therefore, check whether:
       sumDiff * 2 == -qDiff * 9
    9. If they are equal, the second player can balance the sums.
       Otherwise, the first player wins.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/