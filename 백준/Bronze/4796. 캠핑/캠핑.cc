#include <iostream>
using namespace std;
int main() {
    int l,p,v;
    int idx=1;
    while(1) {
        cin >> l >> p >> v;
        if(l==0 && p==0 && v==0) break;
        int res=0;
        while(1) {
            if(v-p<0) {
                if(l < v) res+=l;
                else res += v;
                break;
            }
            v-=p;
            res+=l;
        }
        printf("Case %d: %d\n",idx++, res);
    }
    return 0;
}
