class Solution {
public:
    bool check(vector<int>& nums) {
        int chances = 0;
        for (int i = 1;i<nums.size();i++) {
            if (nums[i] < nums[i-1]) chances ++;
            if (nums[i] < nums[i-1] && chances > 1) return false;
        }
        if (chances == 1) {
            if (nums[nums.size() - 1]<= nums[0])
                return true;
            else return false;
        }
        return true;
    }
};