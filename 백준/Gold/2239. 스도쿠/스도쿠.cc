#include <iostream>
#include <vector>
#include <string>
using namespace std;

int board[9][9];
bool row_check[9][10]; 
bool col_check[9][10]; 
bool box_check[9][10]; 

vector<pair<int, int>> empty_cells; 

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