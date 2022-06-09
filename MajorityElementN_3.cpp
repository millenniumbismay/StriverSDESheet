class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int len = nums.size();
        vector<int> res;
        
        int num1 = -1;
        int num2 = -1;
        
        int c1 = 0;
        int c2 = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == num1) c1++;
            else if(nums[i] == num2) c2++;
            else if(c1==0)
            {
                num1 = nums[i];
                c1=1;
            }
            else if(c2==0)
            {
                num2 = nums[i];
                c2=1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        
        int count_n1=0;
        int count_n2=0;
        
        for(int i=0; i<len; i++)
        {
            if(nums[i] == num1)
                count_n1++;
            else if(nums[i] == num2)
                count_n2++;
        }
        
        if(count_n1>len/3)
            res.push_back(num1);
        if(count_n2>len/3)
            res.push_back(num2);
        
        return res;
    }
};