#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;

int main() {
    stack<int> stack;
    int n, num;
    scanf("%d", &n);

    char s[10];  
    for(int i = 0; i < n; i++) {
        scanf("%s", s);
        if(strcmp(s, "push") == 0) {
            scanf("%d", &num);
            stack.push(num);
        }
        else if(strcmp(s, "pop") == 0) {
            if(stack.empty()) {
                printf("-1\n");
            }
            else {
                printf("%d\n", stack.top());
                stack.pop();
            }
        }
        else if(strcmp(s, "top") == 0) {
            if(stack.empty()) {
                printf("-1\n");
            }
            else {
                printf("%d\n", stack.top());
            }
        }
        else if(strcmp(s, "size") == 0) {
            printf("%d\n", (int)stack.size());
        }
        else if(strcmp(s, "empty") == 0) {
            printf("%d\n", stack.empty() ? 1 : 0);
        }
    }
    return 0;
}
