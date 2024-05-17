class Solution {
public:
    int reverse(int x) {
        int temp = x;
        long num = 0;
        while(temp) {
            num = (num * 10) + (temp %10);
            temp = temp /10;
        }
        if (num < INT_MIN || num > INT_MAX) {
            return 0;
        } return int(num);
    }
};