class Solution {
public:
    
    void swap(vector<int>& nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = nums[i];
    }
    
    void reverseArray(vector<int>& nums){
        int i=0; int j = nums.size()-1;
        while(i<j)
        {
            swap(nums, i, j);
            i++;j--;
        }
    }
    
    void nextPermutation(vector<int>& nums) {
        int len = nums.size();
        int reverseArrayflag = 1;
        int pivot = -1;
        for(int i=len-1; i>=0; i--)
        {
            if(nums[i]<=nums[i-1])
                continue;
            else
            {
                //swap the number with the next bigger number to the right of the array
                int next_bigger_number = nums[i-1];
                int next_bigger_number_index = -1;
                
                for(int j=i; j<len; j++)
                {
                    if(next_bigger_number>nums[j])
                        next_bigger_number_index = j-1;

                }
                
                if(next_bigger_number_index != -1)
                {
                    swap(nums, i, next_bigger_number_index);
                    reverseArrayflag = 0;
                }
                else
                    break;
                
                //reverse the elements after the swapped pivot
                pivot = i;
                cout<<"next_bigger_number_index"<<next_bigger_number_index<<nums[next_bigger_number_index]<<endl;
                cout<<"pivot"<<pivot<<nums[pivot]<<endl;
                break;
            }
        }
        int i=pivot; int j=len-1;
        while(i<j)
        {
            swap(nums, i, j);
            i++;j--;
        }
        
        for(int i=0; i<len;i++)
            cout<<nums[i]<<" ";
        cout<<endl;
        
        if(reverseArrayflag)
        {
            reverseArray(nums);
        }
    }
};