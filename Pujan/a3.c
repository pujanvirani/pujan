#include<stdio.h>
void main(){
    int i,a;
    printf("Enter a table VAlue: ");
    scanf("%d",&a);

    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",i,a,i*a);
    }
}