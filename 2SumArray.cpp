class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        
        multimap<int, int> m;
        
        for(int i=0; i<nums.size(); i++)
        {
            auto itr1 = m.find(target - nums[i]);
            // auto itr2 = m.find(nums[i]);
            if( itr1 != m.end())
            {
                
                res.push_back(i);
                res.push_back(itr1->second);
            }
            else
            {
                m.insert(pair<int,int>(nums[i], i));
            }
        }
        return res;
    }
};
