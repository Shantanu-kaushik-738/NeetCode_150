class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0;
        int p = 1;

        for (auto& i : nums) 
            if (!i) zero++;
            else p *= i;

        for (auto& i : nums)
            if (zero > 1) i = 0;
            else if (zero && !i) i = p;
            else if (zero && i) i = 0;
            else i = p / i;
        return nums; 
    }
};
