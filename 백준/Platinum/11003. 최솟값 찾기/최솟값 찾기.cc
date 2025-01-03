#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
    int n,l;
    int arr[5000000];
    cin >> n >> l;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        pq.push({arr[i],i});
        if(i >= l) {
            while(pq.top().second <= i-l) pq.pop();
        }
        cout << pq.top().first << " ";
    }
    return 0;
}