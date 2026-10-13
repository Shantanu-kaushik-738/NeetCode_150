class Solution {
public:
    int reverse(int x) {
        bool f = false;
        if (x < 0) f = true, x = abs(x);
        int res = 0;
        while (x) {
            int d = x % 10;
            x /= 10;
            if (res < INT_MIN / 10 || res > INT_MAX / 10) return 0;
            res = res * 10 + d;
        }
        return f ? -res : res;
    }
};
