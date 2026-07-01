#include <bits/stdc++.h>
using namespace std;

void solve(int col, int n, vector<int>& board, vector<vector<int>>& ans) {
    if (col == n) {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++) {
        bool safe = true;

        for (int prev = 0; prev < col; prev++) {
            if (board[prev] == row || 
                abs(board[prev] - row) == abs(prev - col)) {
                safe = false;
                break;
            }
        }

        if (safe) {
            board[col] = row;
            solve(col + 1, n, board, ans);
        }
    }nnnnnnnn
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ans;
    vector<int> board(n);

    solve(0, n, board, ans);

    if (ans.empty()) {
        cout << -1;
        return 0;
    }

    for (auto& config : ans) {
        for (int x : config) cout << x << " ";
        cout << endl;
    }
}