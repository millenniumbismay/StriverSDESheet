class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int curr_sum = nums[0];
        
        int len = nums.size();
        int i=0; int j=1;
        while(i<len && j<len)
        {
            curr_sum += nums[j];
            max_sum = max(max_sum, curr_sum);
            
            if(nums[j]>curr_sum)
            {
                i = j;
                curr_sum = nums[i];
                max_sum = max(max_sum,nums[i]);
                j++;
                continue;
            }
            else
                j++;
        }
        
        return max_sum;
    }
};