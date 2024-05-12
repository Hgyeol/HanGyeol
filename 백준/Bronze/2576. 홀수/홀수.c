
#include <stdio.h>
 
int main() {
 
    int n;
    int sum=0, min=100;
    for(int i=0; i<7; i++) {
 
        scanf("%d",&n);
        if(n%2==1){
        sum+=n;
        if(n<min)
        min=n;
        
        }
    }
    if(sum==0)
    printf("-1");
    else printf("%d %d",sum,min);
    
}