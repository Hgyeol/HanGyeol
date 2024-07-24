// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>

using namespace std;

bool visited[8];
int arr[8]={0};
int result[8];
int n, m;

void dfs(int cnt) {
    if(cnt == m) {
        for(int i = 0; i < m; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }
    int check = 0;
    for(int i = 0; i < n; i++) {
        if(visited[i] == false && check != arr[i]) {
            result[cnt] = arr[i];
            check = arr[i];
            visited[i] = true;
            dfs(cnt+1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    dfs(0);
    return 0;
}