class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> st(begin(nums), end(nums));
        
        for (auto& i : nums) {
            if (!st.count(i - 1)) {
                int l = 1;
                while (st.count(i + l)) l++;
                res = max(res, l);
            }
        }
        return res;
    }
};
