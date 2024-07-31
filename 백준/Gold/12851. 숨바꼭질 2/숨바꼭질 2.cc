#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << "0\n1";
        return 0;
    }

    vector<int> arr(100001, -1);
    vector<int> count(100001, 0);

    queue<int> q;
    q.push(n);
    arr[n] = 0;
    count[n] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        int resc = arr[node];
        int cnt = count[node];

        vector<int> n_arr = {node - 1, node + 1, node * 2};

        for (int next : n_arr) {
            if (next >= 0 && next <= 100000) {
                if (arr[next] == -1) {
                    arr[next] = resc + 1;
                    count[next] = cnt;
                    q.push(next);
                } 
                else if (arr[next] == resc + 1) {
                    count[next] += cnt;
                }
            }
        }
    }

    cout << arr[k] << "\n" << count[k];
    return 0;
}