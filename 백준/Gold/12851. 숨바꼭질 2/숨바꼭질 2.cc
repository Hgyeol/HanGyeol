#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << 0 << "\n1";
        return 0;
    }

    vector<int> dist(100001, -1);
    vector<int> count(100001, 0);

    queue<int> q;
    q.push(n);
    dist[n] = 0;
    count[n] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        int current_dist = dist[node];
        int current_count = count[node];

        vector<int> next_positions = {node - 1, node + 1, node * 2};

        for (int next : next_positions) {
            if (next >= 0 && next <= 100000) {
                if (dist[next] == -1) {
                    dist[next] = current_dist + 1;
                    count[next] = current_count;
                    q.push(next);
                } else if (dist[next] == current_dist + 1) {
                    count[next] += current_count;
                }
            }
        }
    }

    cout << dist[k] << "\n" << count[k];
    return 0;
}
