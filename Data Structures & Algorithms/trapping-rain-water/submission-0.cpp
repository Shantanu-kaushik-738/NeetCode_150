class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int lm = height[l], rm = height[r];
        int res = 0;

        while (l < r) {
            lm = max(lm, height[l]);
            rm = max(rm, height[r]);

            if (height[l] <= height[r]) res += lm - height[l++];
            else res += rm - height[r--];
        }
        return res;
    }
};
