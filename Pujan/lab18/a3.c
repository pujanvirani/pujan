// count simple interest using function
#include<stdio.h>
void interest(int roi,int p,int t);
void main(){
    int roi,t,p;
    printf("Enter a interest presentage: ");
    scanf("%d",&roi);
    printf("Enter a amount: ");
    scanf("%d",&p);
    printf("Enter a time: ");
    scanf("%d",&t);
    interest(roi,p,t);
}
void interest(int roi,int p,int t){
    float ans;
    ans=roi*p*t/100;
    printf("simple interest=%f",ans);
}