class Solution {
public:
	vector<vector<int>> ans;
	void f(vector<int>& nums, vector<int>& arr, int i) {
		if (i == nums.size()) { ans.push_back(arr); return; }
		
		arr.push_back(nums[i]);
		f(nums, arr, i + 1);
		arr.pop_back();
		f(nums, arr, i + 1);
	}
	
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<int> arr;
		f(nums, arr, 0);
		return ans;
	}
};
