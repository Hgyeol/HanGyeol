// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt =1;
    long long int prime[283147]={0};
    bool sosu[4000001]={1,1,};
    for(int i = 2; i < 4000001; i++) {
        if(!sosu[i]) {
            if(cnt!=0) prime[cnt] = i + prime[cnt-1];
            else prime[cnt] = i;
            cnt++;
        }
        for(int j = i+i; j < 4000001; j+=i) {
            sosu[j]=1;
        }
    }
    int n;
    cin >> n;
    int a, b;
    int res = 0;
    int left=1, right=1, num;
    while(right < 283147) {
        num = prime[right] - (left > 1 ? prime[left-1] : 0);
        if(num == n) {
            res++;
            right++;
        }
        else if(num > n) {
            left++;
        }
        else {
            right++;
        }
    }
    cout << res;
    //cout << prime[1]-prime[0];
    return 0;
}