// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string, vector<string>> mp;
//         for (auto& i : strs) {
//             string s = i;
//             sort(begin(s), end(s));
//             mp[s].push_back(i);
//         }
//         vector<vector<string>> res;
//         for (auto& i : mp) res.push_back(i.second);
//         return res;
//     }
// };
class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (auto& i : strs) {
            string frq(26, 0);
            for (auto& j : i) frq[j - 'a']++;
            mp[frq].push_back(i);
        }
        vector<vector<string>> res;
        for (auto& i : mp) res.push_back(i.second);
        return res;
    }
};
