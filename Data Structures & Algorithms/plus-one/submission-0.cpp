class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long n = 0;
        for (auto& i : digits) n = n * 10 + i;
        n++;
        vector<int> nums;
        while (n) {
            nums.push_back(n % 10);
            n /= 10;
        }
        int l = 0, r = nums.size() - 1;
        while (l < r) swap(nums[l++], nums[r--]);
        return nums;
    }
};
