class Solution {
public:
    
    int majorityElement(vector<int>& nums) {
        int res = nums[0];
        int curr_sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == res)
                curr_sum++;
            else
                curr_sum--;
            if(curr_sum == 0)
            {
                res = nums[i+1];
            }
        }
        return res;
    }
};