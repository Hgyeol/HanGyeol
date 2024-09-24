// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parent[10001];

int find(int x) {
    if(parent[x]==x) return x;
    else return parent[x] = find(parent[x]);
}

void merge(int x, int y) {
    x = find(x);
    y = find(y);
    parent[x] = y;
}

int main() {
    int n, e, a, b, c, sum=0, cnt=0;
    vector<pair<int, pair<int, int>>> v;
    cin >> n >> e;
    for(int i = 0; i < e; i++) {
        cin >> a >> b >> c;
        v.push_back(make_pair(c, make_pair(a, b)));
    }
    sort(v.begin(), v.end());
    for(int i = 1; i <= n; i++) parent[i] = i;
    for(int i = 0; i < v.size(); i++) {
        if(find(v[i].second.first) != find(v[i].second.second)) {
            merge(v[i].second.first, v[i].second.second);
            sum += v[i].first;
            cnt++;
            if(cnt == n-1) break;
        }
    }
    cout << sum;
    return 0;
}