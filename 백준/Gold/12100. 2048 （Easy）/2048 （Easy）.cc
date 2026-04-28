#include <iostream>

using namespace std;

int n, mx = 0;

void rotate(int arr[21][21]) {
    int tmp[21][21] = {0};
    for(int j = 0; j < n; j++) {
        for(int k = 0; k < n; k++) {
            tmp[j][k] = arr[k][n-j-1];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = tmp[i][j];
        }
    }
}

void push_left(int arr[21][21]) {
    for(int i = 0; i < n; i++) {
        int last = 0, idx = 0;
        int tmp[21] = {0};
        
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 0) continue;
            if(last == 0) last = arr[i][j];
            else if(arr[i][j] == last) {
                tmp[idx++] = last * 2;
                last = 0;
            }
            else {
                tmp[idx++] = last;
                last = arr[i][j];
            }
        }
        if(last != 0) {
            tmp[idx] = last;
        }
        for(int j = 0; j < n; j++) arr[i][j] = tmp[j];
    }
}

void move(int d, int arr[21][21]) {
    for(int i = 0; i < d; i++) rotate(arr);
    
    push_left(arr);
    
    for(int i = 0; i < (4-d)%4; i++) rotate(arr);
}

void dfs(int cnt, int arr[21][21]) {
    if(cnt == 5) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(mx < arr[i][j]) mx = arr[i][j];
            }
        }
        return;
    }
    
    int next[21][21];
    for(int dir = 0; dir < 4; dir++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                next[i][j] = arr[i][j];
            }
        }
        move(dir, next);
        dfs(cnt + 1, next);
    }
}

int main() {
    
    int arr[21][21] = {0};
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    dfs(0, arr);
    cout << mx;
    return 0;
}