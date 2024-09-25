// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long int parent[100001];

long long int find(long long int x) {
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}
void merge(long long int x, long long int y) {
    x = find(x);
    y = find(y);
    parent[x]=y;
}
int main() {
    long long int n, m, a, b, c, sum=0, sum2=0, cnt=0;
    vector<pair<long long int, pair<long long int,long long int>>> v;
    vector<long long int> v2;
    cin >> n >> m;
    for(long long int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        v.push_back(make_pair(c, make_pair(a,b)));
        sum2 += c;
    }
    sort(v.begin(), v.end());
    for(long long int i = 1; i <= n; i++) parent[i] = i;
    for(long long int i = 0; i < v.size(); i++) {
        if(find(v[i].second.first)!=find(v[i].second.second)) {
            merge(v[i].second.first,v[i].second.second);
            sum += v[i].first;
            cnt++;
        }
    }
    if(cnt == n-1) cout << sum2-sum;
    else cout << "-1";
    return 0;
}