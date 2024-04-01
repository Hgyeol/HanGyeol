#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 987654321;

int countRepaints(vector<vector<char>> board, int x, int y) {
    int repaints1 = 0;
    int repaints2 = 0;

    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if ((i + j) % 2 == 0) {
                // 체스판 모양1 (W B W B W B W B)
                if (board[i][j] != 'W') repaints1++;
                // 체스판 모양2 (B W B W B W B W)
                if (board[i][j] != 'B') repaints2++;
            } else {
                // 체스판 모양1 (B W B W B W B W)
                if (board[i][j] != 'B') repaints1++;
                // 체스판 모양2 (W B W B W B W B)
                if (board[i][j] != 'W') repaints2++;
            }
        }
    }

    return min(repaints1, repaints2);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int ans = INF;
    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            ans = min(ans, countRepaints(board, i, j));
        }
    }

    cout << ans << endl;

    return 0;
}
