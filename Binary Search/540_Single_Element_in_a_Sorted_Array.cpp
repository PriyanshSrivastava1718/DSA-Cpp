/* class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
        int s = 0;
        int e = nums.size() - 1;

        while(s < e) //will end at s==e
        {
            int mid = s + (e - s) / 2;

            if(mid % 2 == 0)        //if mid ==even 2 cases 
            {
                if(nums[mid] == nums[mid + 1])      //if true then all good answer is RHS
                {
                    s = mid + 2;
                }
                else //mid can be answer or ans is LHS
                {
                    e = mid;
                }
            }
            else        //if m== odd
            {
                if(nums[mid] == nums[mid - 1]) //all right before answer is RHS
                {
                    s = mid + 1;
                }
                else        //answer is LHS as answer cant be on odd index
                {
                    e = mid - 1;
                }
            }
        }
        return nums[s];     //return s index element 
    }
}; */
/*
Algorithm: Binary Search

Problem:
- Find the element that occurs an odd number of times.
- Every other element occurs an even number of times.
- Elements always appear as adjacent pairs, although the same element
  may have multiple adjacent pairs in different parts of the array.

Observation:
- Before the odd occurring element, every pair starts at an even index.
- After the odd occurring element, every pair starts at an odd index.
- This change in pair alignment allows Binary Search to be applied.

Approach:
- Find the middle index.
- If mid is even, compare it with the next element.
    - If they are equal, the answer lies on the right.
    - Otherwise, the answer lies on the left (including mid).
- If mid is odd, compare it with the previous element.
    - If they are equal, the answer lies on the right.
    - Otherwise, the answer lies on the left.
- Continue until only one element remains.

Time Complexity: O(log n)

Space Complexity: O(1)
*/