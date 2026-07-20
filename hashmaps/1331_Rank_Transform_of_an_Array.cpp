/* class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        if(arr.empty())
            return {};
        vector <int> nums;
        for(int  i = 0;i<arr.size();i++)  //copies given array
        {
            nums.push_back(arr[i]);
        }
        sort(nums.begin(),nums.end());  //sorts the array
        int rank = 1;
        vector <int> ranks; //array for ranking 
        ranks.push_back(rank);//pushing rank 1 for first element cause sorted in ascending order
        for(int i=1;i<arr.size();i++)  //traverse array for ranks
        {
            if(nums[i]==nums[i-1]) //same element same rank
                ranks.push_back(rank);
            else
            {
                rank++;
                ranks.push_back(rank);
            }
        }
        unordered_map<int,int> mapp; //hashmap innitialisation
        for(int i=0;i<nums.size();i++)  //mapping each key with values
        {
            mapp[nums[i]]=(ranks[i]);
        }
        for(int i=0;i<nums.size();i++) //using hashmaps to assign ranks
        {
            ranks[i]=mapp[arr[i]];
        }
        return ranks;
    }
}; */
/* 
algorithm : create copy of an array
            sort it 
            assign ranks using variable 
            use loop to assign key with values
            assign ranks to each element using hashmap 
            time complexity- O(n+nlogn+n+n+n) = O(nlog n)
            space complexity = O(n)
 */