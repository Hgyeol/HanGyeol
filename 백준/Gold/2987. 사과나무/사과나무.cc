// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int circle_x[3], circle_y[3];
    int n, fuck=0;
    for(int i = 0; i < 3; i++) cin >> circle_x[i] >> circle_y[i];
    int arr_x[100] = {0};
    int arr_y[100] = {0};
    cin >> n;
    double res = (circle_x[0]*(circle_y[1]-circle_y[2]) + circle_x[1]*(circle_y[2]-circle_y[0]) + circle_x[2]*(circle_y[0]-circle_y[1]))/2.0;
    if(res < 0) res *= -1;
    for(int i = 0; i < n; i++) cin >> arr_x[i] >> arr_y[i];
    double total = 0, sum;
    for(int i = 0; i < n; i++) {
        //  |xA(yB-yC)+xB(yC-yA)+xC(yA-yB)| / 2
        //  |arr_x(y0-y1)+x0(y1-arr_y)+x1(arr_y-y0)| / 2
        //  |arr_x(y1-y2)+x1(y2-arr_y)+x2(arr_y-y1)| / 2
        //  |arr_x(y2-y0)+x2(y0-arr_y)+x0(arr_y-y2)| / 2
        total = 0;
        for(int j = 0; j < 3; j++) {
            sum = (arr_x[i]*(circle_y[j]-circle_y[(j+1)%3]) + circle_x[j]*(circle_y[(j+1)%3]-arr_y[i]) + circle_x[(j+1)%3]*(arr_y[i]-circle_y[j]))/2.0;
            if(sum < 0) sum *= -1;
            // printf("SUM --- %lf\n", sum);
            total += sum;
        }
        // printf("%d --- %lf\n", i, total);
        if(res == total) fuck++;
    }
    printf("%.1f\n%d", res, fuck);
    return 0;
}