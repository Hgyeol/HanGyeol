// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool vis[2001];
int sel[2001];
int n;
int arr[50];
bool sosu[2001]={1,1,};

bool bimatch(int num) {
    if(vis[num]) return false;
    
    vis[num] = true;
    
    for(int i = 1; i < n; i++) {
        if(num == i || sosu[arr[num] + arr[i]]) continue;
        
        if(sel[i] == -1 || bimatch(sel[i])) {
            sel[i] = num;
            return true;
        }
    }
    return false;
}

int main() {
    
    vector<int> res;
    for(int i = 2; i <= 2000; i++) {
        for(int j = i+i; j <= 2000; j+=i) {
            sosu[j] = true;
        }
    }
    // for(int i = 1; i <= 2000; i++) {
    //     if(!sosu[i]) cout << i << " ";
    // }
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    for(int i = 1; i < n; i++) {
        if(sosu[arr[0] + arr[i]]) continue;
        
        fill(sel, sel+2000, -1);
        
        bool flag = true;
        
        for(int j = 1; j < n; j++) {
            if(i!=j) {
                fill(vis, vis+2000, false);
                if(!bimatch(j)) {
                    flag=false;
                    break;
                }
            }
        }
        if(flag) res.push_back(arr[i]);
    }
    sort(res.begin(), res.end());
    if(res.empty()) cout << -1;
    else {
        for(int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
    }
    return 0;
}