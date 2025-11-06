// add using functions
#include<stdio.h>
void add(int a,int b);
void main (){
    int a,b;
    printf("Enter a & b: ");
    scanf("%d %d",&a,&b);
    add(a,b);
}
void add(int a,int b){
    printf("%d",a+b);
}