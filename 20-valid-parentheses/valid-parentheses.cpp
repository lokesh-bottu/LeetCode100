class Solution {
public:
    bool isValid(string s) {
        vector <int> nums ;
        for(int i = 0;i<s.length();i++) {
            if (s[i] == '{' || s[i]=='[' || s[i]=='(') {
                nums.push_back(s[i]);
            }
            else if (s[i] == '}' && nums.size() >0) {
                if (nums[nums.size()-1] == '{') {
                    nums.pop_back();
                } else {
                    return false;
                }
            } 
            else if (s[i] == ']' && nums.size() >0) {
                if (nums[nums.size()-1] == '[') {
                    nums.pop_back();
                } else {
                    return false;
                }
            }
            else if (s[i] == ')' && nums.size() >0) {
                if (nums[nums.size()-1] == '(') {
                    nums.pop_back();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        if (nums.size() == 0) {
        
        return true;} else {return false;}
    }
};