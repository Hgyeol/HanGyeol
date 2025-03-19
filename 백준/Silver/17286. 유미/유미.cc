// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x[3];
    int y[3];
    int sx, sy;
    cin >> sx >> sy;
    for(int i = 0; i < 3; i++) cin >> x[i] >> y[i];
    double res=100000000, rs1, rs2;
    for(int i = 0; i < 3; i++) {
        rs1=sqrt(abs(x[i]-sx)*abs(x[i]-sx) + abs(y[i]-sy)*abs(y[i]-sy));
        for(int j = 0; j < 3; j++) {
            if(i!=j) {
                rs2 = rs1 + sqrt(abs(x[i]-x[j])*abs(x[i]-x[j]) + abs(y[i]-y[j])*abs(y[i]-y[j]));
                for(int o = 0; o < 3; o++) {
                    if(o!=i && o!=j) {
                        if(res > rs2 + sqrt(abs(x[o]-x[j])*abs(x[o]-x[j]) + abs(y[o]-y[j])*abs(y[o]-y[j]))) res = rs2 + sqrt(abs(x[o]-x[j])*abs(x[o]-x[j]) + abs(y[o]-y[j])*abs(y[o]-y[j]));
                    }
                }
            }
        }
    }
    cout << (int)res;
    return 0;
}