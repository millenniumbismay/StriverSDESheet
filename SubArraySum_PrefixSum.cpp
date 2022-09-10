class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefix_sum_mp;
        int count=0;
        int cum_sum = 0;
        prefix_sum_mp[cum_sum] = 1; //by default we have to assume we have a 0 at starting. As the cumulative sum is 0 at nums[-1]
        
        for(int i=0; i<nums.size(); i++)
        {
            cum_sum += nums[i];
            //We need to find if cum_sum - k is present already in map
            if(prefix_sum_mp.find(cum_sum - k)!=prefix_sum_mp.end())
                count += prefix_sum_mp[cum_sum - k];
                
            if(prefix_sum_mp.find(cum_sum)!=prefix_sum_mp.end())
            {
                prefix_sum_mp[cum_sum]++;
            }
            else
                prefix_sum_mp[cum_sum] = 1;
        }
        
        return count;
    }
};
