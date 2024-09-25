// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long int parent[200001];

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
    vector<int> res;
    while(1){
        long long int n, m, a, b, c, cnt=0, sum=0;
        vector<pair<long long int, pair<long long int,long long int>>> v;
        cin >> n >> m;
        if(n==0 && m == 0) break;
        for(long long int i = 0; i < m; i++) {
            cin >> a >> b >> c;
            v.push_back(make_pair(c, make_pair(a,b)));
            sum+=c;
        }
        sort(v.begin(), v.end());
        for(long long int i = 0; i <= n; i++) parent[i] = i;
        //for(long long int i = 1; i <= n; i++) cout << parent[i] << " ";
        for(long long int i = 0; i < v.size(); i++) {
            if(find(v[i].second.first)!=find(v[i].second.second)) {
                merge(v[i].second.first,v[i].second.second);
                sum -= v[i].first;
            }
        }
        // cout << sum2 - sum << "\n";
        // cout << "sum2 : " << sum2 << " - sum : " << sum << "\n";
        res.push_back(sum);
    }
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << "\n";
    }
    return 0;
}