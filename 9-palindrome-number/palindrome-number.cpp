class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }
        else {
            int temp = x;
            long num = 0;
            while(temp) {
                num = (num * 10) + (temp % 10);
                temp = temp /10;
            }
            return (num == x);
        }
        
    }
};