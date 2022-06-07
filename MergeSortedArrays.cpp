class Solution {
public:
    
    void swap(vector<int>& nums1, int i, vector<int>& nums2, int j){
        int temp = nums1[i];
        nums1[i] = nums2[j];
        nums2[j] = temp;
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0; int j=0;
        
        if(n==0)
            return;
        
        if(m==0)
        {
            if(n == 0)
                return;
            else
            {
                nums1 = nums2;
                return;
            }
        }
        
        while(i<nums1.size() || j<nums2.size())
        {
            if(i<m)
            {
                if(nums1[i] <= nums2[j])
                    i++;
                else if(nums1[i] > nums2[j])
                {
                    swap(nums1, i, nums2, j);
                    sort(nums2.begin(), nums2.end());
                    i++;
                } 
            }
            else
            {
                nums1[i] = nums2[j];
                j++;
                i++;
            }
            
        }
    }
};