#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << "0\n"<<n;
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
    int cnt = arr[k]-1;
    vector<int> res;
    res.push_back(k);
    q.push(k);
    while(cnt!=0) {
        int node = q.front();
        q.pop();
        if(arr[node-1]==cnt) {
            //cout << "node-1 : " << node - 1 << "\n";
            res.push_back(node-1);
            q.push(node-1);
            cnt--;
        }
        else if(arr[node+1]==cnt) {
            //cout << "node+1 : " << node + 1 << "\n";
            res.push_back(node+1);
            q.push(node+1);
            cnt--;
        }
        else if(node%2==0 && arr[node/2]==cnt) {
            //cout << "node/2 : " << node/2 << "\n";
            res.push_back(node/2);
            q.push(node/2);
            cnt--;
        }
    }
    res.push_back(n);
    cout << arr[k] << "\n";
    for(int i = res.size()-1; i >= 0; i--) {
        cout << res[i] << " ";
    }
    //cout << arr[k] << "\n" << count[k];
    // for(int i = 0; i <= 100; i++) {
    //     //cout << i << " : " << arr[i] << "\n";
    //     cout << arr[i];
    // }
    return 0;
}