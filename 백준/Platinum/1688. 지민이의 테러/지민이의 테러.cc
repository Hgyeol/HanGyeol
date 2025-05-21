#include <iostream>
using namespace std;
long long int bx[10000];
long long int by[10000];
long long int n;
long long int ray_casting(long long int x, long long  int y) {
    long long int intersections = 0;
    for(int i = 0; i < n; i++) {
        long long int x1 = bx[i], y1 = by[i];
        long long int x2 = bx[(i+1)%n], y2 = by[(i+1)%n];
        if(((y < y1) != (y < y2)) && (x < (x2-x1)*(y-y1)/(double)(y2-y1)+x1)) intersections++;
        else if(((x==x1)&&(y==y1)) || ((x==x2)&&(y==y2))) intersections++;
    }
    return intersections;
}
long long int point_on_side(long long int x, long long  int y) {
    long long int is_on_a_side = 0;
    for(int i = 0; i < n; i++) {
        long long int x1 = bx[i], y1 = by[i];
        long long int x2 = bx[(i+1)%n], y2 = by[(i+1)%n];
        if(((y < y1) != (y < y2)) && ((x < x1) != (x < x2)) && ((x2-x1)*(y-y1)==(x-x1)*(y2-y1))) {
            is_on_a_side = 1;
            break;
        }
        else if(((x==x1)&&(y==y1))||((x==x2)&&(y==y2))) {
            is_on_a_side = 1;
            break;
        }
    }
    return is_on_a_side;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> bx[i] >> by[i];
    long long int ax[3] = {0};
    long long int ay[3] = {0};
    for(int i = 0; i < 3; i++) cin >> ax[i] >> ay[i];
    for(int i = 0; i < 3; i++) {
        if((ray_casting(ax[i], ay[i])%2==1) || point_on_side(ax[i], ay[i])) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}