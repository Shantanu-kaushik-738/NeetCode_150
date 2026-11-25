class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        long l = 1;
        long r = *max_element(begin(nums), end(nums));
        long ans = r;

        while (l <= r) {
            long m = l + (r - l) / 2;
            long k = 0;
            for (auto& i : nums) k += ceil(double(i) / double(m));
            if (k <= h) ans = m, r = m - 1;
            else l = m + 1;
        }
        return ans;
    }
};
