/* class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<int> nums;
        int s = 0;
        int e = arr.size() - 1;
        while(e - s + 1 > k)
        {
            if(abs(arr[s] - x) > abs(arr[e] - x))
                s++;
            else
                e--;
        }
        for(int i = s; i <= e; i++)
            nums.push_back(arr[i]);
        return nums;
    }
}; */
/*
    Algorithm:
    1. Use two pointers to maintain a window containing the closest elements.
    2. Start with the complete sorted array using left and right pointers.
    3. Compare the distances of the elements at both ends from x.
    4. Remove the element which is farther from x by moving the corresponding pointer.
    5. If both distances are equal, remove the larger element from the right side.
    6. Continue until exactly k elements remain.
    7. Store the remaining elements in the result vector.

    Time Complexity: O(n)
    Space Complexity: O(k)
*/