#include <iostream>

using namespace std;

int n, mx = 0;

int move(int dir, int arr[21][21]) {
    int new_max = 0;
    
    if (dir == 0) { 
        for (int i = 0; i < n; i++) {
            int last = 0, idx = 0, tmp[21] = {0};
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 0) continue;
                if (last == 0) last = arr[i][j];
                else if (arr[i][j] == last) {
                    tmp[idx++] = last * 2;
                    if (last * 2 > new_max) new_max = last * 2;
                    last = 0;
                } else {
                    tmp[idx++] = last;
                    if (last > new_max) new_max = last;
                    last = arr[i][j];
                }
            }
            if (last != 0) { tmp[idx] = last; 
            if (last > new_max) new_max = last; }
            for (int j = 0; j < n; j++) arr[i][j] = tmp[j];
        }
    } 
    else if (dir == 1) { 
        for (int i = 0; i < n; i++) {
            int last = 0, idx = n - 1, tmp[21] = {0};
            for (int j = n - 1; j >= 0; j--) {
                if (arr[i][j] == 0) continue;
                if (last == 0) last = arr[i][j];
                else if (arr[i][j] == last) {
                    tmp[idx--] = last * 2;
                    if (last * 2 > new_max) new_max = last * 2;
                    last = 0;
                } else {
                    tmp[idx--] = last;
                    if (last > new_max) new_max = last;
                    last = arr[i][j];
                }
            }
            if (last != 0) { tmp[idx] = last; 
            if (last > new_max) new_max = last; }
            for (int j = 0; j < n; j++) arr[i][j] = tmp[j];
        }
    } 
    else if (dir == 2) { 
        for (int j = 0; j < n; j++) {
            int last = 0, idx = 0, tmp[21] = {0};
            for (int i = 0; i < n; i++) {
                if (arr[i][j] == 0) continue;
                if (last == 0) last = arr[i][j];
                else if (arr[i][j] == last) {
                    tmp[idx++] = last * 2;
                    if (last * 2 > new_max) new_max = last * 2;
                    last = 0;
                } else {
                    tmp[idx++] = last;
                    if (last > new_max) new_max = last;
                    last = arr[i][j];
                }
            }
            if (last != 0) { tmp[idx] = last; 
            if (last > new_max) new_max = last; }
            for (int i = 0; i < n; i++) arr[i][j] = tmp[i];
        }
    } 
    else {
        for (int j = 0; j < n; j++) {
            int last = 0, idx = n - 1, tmp[21] = {0};
            for (int i = n - 1; i >= 0; i--) {
                if (arr[i][j] == 0) continue;
                if (last == 0) last = arr[i][j];
                else if (arr[i][j] == last) {
                    tmp[idx--] = last * 2;
                    if (last * 2 > new_max) new_max = last * 2;
                    last = 0;
                } else {
                    tmp[idx--] = last;
                    if (last > new_max) new_max = last;
                    last = arr[i][j];
                }
            }
            if (last != 0) { tmp[idx] = last; 
            if (last > new_max) new_max = last; }
            for (int i = 0; i < n; i++) arr[i][j] = tmp[i];
        }
    }
    
    return new_max; 
}

void dfs(int cnt, int arr[21][21], int current_max) {
    if (current_max > mx) mx = current_max;
    
    if (current_max * (1 << (10 - cnt)) <= mx) return;
    
    if (cnt == 10) return;
    
    for (int dir = 0; dir < 4; dir++) {
        int next[21][21];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                next[i][j] = arr[i][j];
            }
        }
        
        int next_max = move(dir, next);
        
        bool flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] != next[i][j]) {
                    flag = true; 
                    break;
                }
            }
            if (flag) break;
        }
        
        if (flag) {
            dfs(cnt + 1, next, next_max);
        }
    }
}

int main() {
    int m;
    int arr[21][21] = {0};
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if(m < arr[i][j]) m = arr[i][j];
        }
    }
    dfs(0, arr, m);
    cout << mx;
    return 0;
}