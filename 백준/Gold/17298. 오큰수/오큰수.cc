// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
    int n;
    stack<int> stack;
    int arr[1000000];
    int res[1000000];
    cin >> n;
    fill(res, res+n, -1);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    stack.push(0);
    for(int i = 1; i < n; i++) {
        while(!stack.empty()) {
          if(arr[stack.top()] < arr[i]) {
            res[stack.top()] = arr[i];
            stack.pop();
          }
          else break;
        }
        stack.push(i);
    }
    for(int i = 0; i < n; i++) cout << res[i] << " ";
    return 0;
}