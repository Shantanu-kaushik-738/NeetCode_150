class Solution {
public:
    vector<string> res;
    void funx(string temp, int n, int op, int cl) {
        if (temp.size() == 2 * n) {
            res.push_back(temp); 
            return;
        }

        if (op < n) {
            temp.push_back('(');
            funx(temp, n, op + 1, cl);
            temp.pop_back();
        }

        if (cl < op) {
            temp.push_back(')');
            funx(temp, n, op, cl + 1);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        funx("", n, 0, 0);
        return res;
    }
};
