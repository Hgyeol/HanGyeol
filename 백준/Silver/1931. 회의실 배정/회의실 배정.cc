#include <iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b) {
    if(a.second==b.second) return a.first<b.first;
    else return a.second<b.second;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, res = 0,num1,num2;
    cin >> n;
    vector<pair<int,int>> arr;
    for(int i = 0; i < n; i++) {
        cin >> num1 >> num2;
        arr.push_back(make_pair(num1,num2));
    }
    sort(arr.begin(), arr.end(), cmp);
    int i = 0;
    while(1) {
        int check = 0;
        for(int j = i+1; j < n; j++) {
            if(arr[i].second <= arr[j].first) {
                i = j;
                res++;
                check = 1;
                break;
            }
        }
        if(check == 0) break;
    }
    cout << res+1;
    return 0;
}
