//using pointer with two numbers sum
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("sum=%d",*ptr1+*ptr2);
}