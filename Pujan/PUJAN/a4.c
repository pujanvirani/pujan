#include<stdio.h>
void main(){
    int a,b,c,max;

    printf("Enter Three No c : " );
    scanf("%d %d %d",&a,&b,&c);

    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d",max);

}