#include <iostream>
#include <vector>
#include <string>
using namespace std;

int board[9][9];
bool row_check[9][10]; // row_check[i][k]: i번째 행에 숫자 k가 있으면 true
bool col_check[9][10]; // col_check[j][k]: j번째 열에 숫자 k가 있으면 true
bool box_check[9][10]; // box_check[b][k]: b번째 박스에 숫자 k가 있으면 true

vector<pair<int, int>> empty_cells; 

// DFS 스도쿠 해결 함수
void solve_sudoku(int idx) {
    if (idx == empty_cells.size()) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j];
            }
            cout << "\n";
        }
        exit(0); 
    }
    
    int r = empty_cells[idx].first;
    int c = empty_cells[idx].second;
    int box_num = (r / 3) * 3 + (c / 3); 
    
    for (int num = 1; num <= 9; num++) {
        if (!row_check[r][num] && !col_check[c][num] && !box_check[box_num][num]) {
            
            board[r][c] = num;
            row_check[r][num] = col_check[c][num] = box_check[box_num][num] = true;
            
            solve_sudoku(idx + 1);
            
            board[r][c] = 0;
            row_check[r][num] = col_check[c][num] = box_check[box_num][num] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for (int i = 0; i < 9; i++) {
        string line;
        cin >> line; 
        
        for (int j = 0; j < 9; j++) {
            board[i][j] = line[j] - '0'; 
            
            if (board[i][j] != 0) {
                int num = board[i][j];
                int box_num = (i / 3) * 3 + (j / 3);
                
                row_check[i][num] = true;
                col_check[j][num] = true;
                box_check[box_num][num] = true;
            } else {
                empty_cells.push_back({i, j}); 
            }
        }
    }
    
    solve_sudoku(0); 
    
    return 0;
}