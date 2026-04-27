#include <iostream>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

long long count(long long x) {
    if (x == 0) return 0;
    return __builtin_popcountll(x) + 63 - __builtin_clzll(x);
}

long long len(long long x) {
    if (x == 0) return 0;
    return 64 - __builtin_clzll(x);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long g, f;
    cin >> g >> f;
    
    map<long long, long long> dist;
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<>> q;

    long long ans = count(g); 

    q.push({0, g}); 
    dist[g] = 0;

    while (!q.empty()) {
        long long d = q.top().first;
        long long x = q.top().second;
        q.pop();

        if (d > dist[x] || d >= ans) continue;

        ans = min(ans, d + count(x));

        long long n1 = x / 2;
        long long c1 = d + 1 + (x % 2); 
        if (c1 + len(n1) < ans && (dist.find(n1) == dist.end() || c1 < dist[n1])) {
            dist[n1] = c1;
            q.push(make_pair(c1, n1));
        }
        long long n2 = (x + f) / 2;
        long long c2 = d + 1 + ((x + f) % 2);
        if (c2 + len(n2) < ans && (dist.find(n2) == dist.end() || c2 < dist[n2])) {
            dist[n2] = c2;
            q.push(make_pair(c2, n2));
        }
    }

    cout << ans;
    return 0;
}