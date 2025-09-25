#include "stdio.h"

void main() {
    int x,y,i,ans=1;

    printf("Enter base and power : ");
    scanf("%d %d",&x,&y);

    for(i=1;i<=y;i++) {
        ans = ans * x;
    }

    printf("x^y = %d",ans);

}