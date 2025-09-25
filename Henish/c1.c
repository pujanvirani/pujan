#include "stdio.h"

void main() {
    int i,j,n,rem1,rem2,temp,trem1,trem2;
    
    printf("Enter a no. : ");
    scanf("%d",&n);
    
    temp=n;
    rem1=n%10;
    
    for(i=0;n!=0;i++) {
        rem2=n%10;
        n=n/10;
    }

    trem1=rem1;
    trem2=rem2;

    for(j=1;j<i;j++) {
        rem1 = rem1*10;
        rem2 = rem2*10;
    }

    temp = temp - rem2 + rem1 - trem1 + trem2; 

    printf("%d",temp);

}