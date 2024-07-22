// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int n, m;
bool visited[9];
int result[9];

void dfs(int cnt) {
    if(cnt == m) {
        for(int i = 0; i < m; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }
    else {
        for(int j = 1; j <= n; j++) {
            if(visited[j] == false) {
                visited[j] = true;
                result[cnt] = j;
                dfs(cnt+1);
                visited[j] = false;
            }
        }
    }
}
int main() {
    cin >> n >> m;
    dfs(0);
    return 0;
}