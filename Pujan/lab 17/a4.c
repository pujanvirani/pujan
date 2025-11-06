#include<stdio.h>
void main (){
    int a,b,temp;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&c);
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("%d %d",*ptr1,*ptr2);
}