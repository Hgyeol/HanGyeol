// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

typedef struct {
    char par;
    int left;
    int right;
}Node;

Node node[26];

void pre(int par) {
    cout << node[par].par;
    if(node[par].left) pre(node[par].left);
    if(node[par].right) pre(node[par].right);
}
void in(int par) {
    if(node[par].left) in(node[par].left);
    cout << node[par].par;
    if(node[par].right) in(node[par].right);
}
void post(int par) {
    if(node[par].left) post(node[par].left);
    if(node[par].right) post(node[par].right);
    cout << node[par].par;
}
int main() {
    
    int n;
    
    cin >> n;
    
    char par, left, right;
    
    while(n--) {
        
        cin >> par >> left >> right;
        
        node[par-'A'].par = par;
        if(left != '.') node[par-'A'].left = left-'A';
        if(right != '.') node[par-'A'].right = right-'A';
    }
    pre(0);
    cout<<"\n";
    in(0);
    cout<<"\n";
    post(0);
    cout<<"\n";
    return 0;
}