// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int parent[100001];

int find(int x) {
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}
void merge(int x, int y) {
    x = find(x);
    y = find(y);
    parent[x]=y;
}
int main() {
    int n, m, a, b, c, sum=0;
    vector<pair<int, pair<int,int>>> v;
    vector<int> v2;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        v.push_back(make_pair(c, make_pair(a,b)));
    }
    sort(v.begin(), v.end());
    for(int i = 1; i <= n; i++) parent[i] = i;
    for(int i = 0; i < v.size(); i++) {
        if(find(v[i].second.first)!=find(v[i].second.second)) {
            merge(v[i].second.first,v[i].second.second);
            v2.push_back(v[i].first);
        }
    }
    for(int i = 0; i < v2.size()-1; i++) sum += v2[i];
    cout << sum;
    return 0;
}