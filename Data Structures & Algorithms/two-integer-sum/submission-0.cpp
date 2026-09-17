class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int sec = target - nums[i];
            if (mp.count(sec)) return {min(i, mp[sec]), max(i, mp[sec])};
            mp.insert({nums[i], i});
        }
        return {-1, -1};
    }
};
