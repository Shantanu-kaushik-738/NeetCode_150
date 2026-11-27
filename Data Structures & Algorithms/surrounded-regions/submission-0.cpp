class Solution {
public:
    int n, m;
    void dfs(int i, int j, vector<vector<char>>& board, vector<vector<int>>& vis) {
        if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] || board[i][j] == 'X') return;
        vis[i][j] = 1;
        dfs(i - 1, j, board, vis);
        dfs(i, j - 1, board, vis);
        dfs(i + 1, j, board, vis);
        dfs(i, j + 1, board, vis);
    }

    void solve(vector<vector<char>>& board) {
        n = board.size(), m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m));

        for (int i = 0; i < m; i++) {
            if (board[0][i] == 'O' && !vis[0][i])
                dfs(0, i, board, vis);
            if (board[n - 1][i] == 'O' && !vis[n - 1][i])
                dfs(n - 1, i, board, vis);
        }

        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O' && !vis[i][0])
                dfs(i, 0, board, vis);
            if (board[i][m - 1] == 'O' && !vis[i][m - 1])
                dfs(i, m - 1, board, vis);
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) 
                if (!vis[i][j] && board[i][j] == 'O') board[i][j] = 'X';
    }
};
