class Solution {
public:
    int fib(int n) {
        int prev = 0;
        int cur = 1;
        int ans = 0;
        if (n==0 || n==1) return n;
        while (n >=2) {
            ans = prev + cur;
            prev = cur;
            cur = ans;
            n--;
        }
        return ans;
    }
};

