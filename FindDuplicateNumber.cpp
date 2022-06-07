class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        
        slow = nums[slow];
        fast = nums[nums[fast]];
        
        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
            // cout<<slow<<" "<<fast<<endl;
        }
        
        fast = nums[0];
        while(slow!=fast)
        {
            fast = nums[fast];
            slow = nums[slow];
        }
        
        // cout<<"slow: "<<slow<<" fast: "<<fast;
        return slow;
    }
};