class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> frq(26);
        for (int i = 0; i < s.size(); i++) {
            frq[s[i] - 'a']++;
            frq[t[i] - 'a']--;
        }
        for (auto& i : frq) if (i) return false;
        return true;
    }
};
