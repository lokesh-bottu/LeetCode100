class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int right = nums.size()-1;
        int mid = 0;
        while(mid <= right) {
            if (nums[mid] ==0 ) {
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                low +=1;
                mid ++;
            }
            else if(nums[mid] ==2) {
                int temp = nums[mid];
                nums[mid] = nums[right];
                nums[right] = temp;
                right--;
            }
            else {
                mid ++;
            }
        }
        
    }
};