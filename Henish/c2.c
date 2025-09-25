#include "stdio.h"

void main () {
    int i,j,x,y,ans=0;

    printf("Enter base and power : ");
    scanf("%d %d",&x,&y);

    for(i=1;i<y;i++) {
        for(j=1;j<=x;j++) {
            ans = ans + x;
        }
    }

    printf("x^y = %d",ans);
}