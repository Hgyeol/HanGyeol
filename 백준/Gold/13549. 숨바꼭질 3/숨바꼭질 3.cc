// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    int n, k;
    
    cin >> n >> k;
    int visited[200001]={0};
    
    queue<int> q;
    q.push(n);
    
    visited[n]++;
    
    while(!q.empty()) {
        int node = q.front();
        //cout<<"node : " << node <<"\n";
        q.pop();
        if(node!=k) {
            if(node*2 >= 0 && node*2 < 200001 && visited[node*2] == 0) {
                q.push(node*2);
                visited[node*2] = visited[node];
            }
            if(node-1 >= 0 && node-1 < 200001 && visited[node-1] == 0) {
                q.push(node-1);
                visited[node-1] = visited[node]+1;
            }
            if(node+1 >= 0 && node+1 < 200001 && visited[node+1] == 0) {
                q.push(node+1);
                visited[node+1] = visited[node]+1;
            }
        }
        else {
            cout << visited[node]-1;
            break;
        }
    }
    return 0;
}