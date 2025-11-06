//find maximum and minimum between two number using function
#include<stdio.h>
void mm(int a,int b);
void main (){
    int a,b;
    printf("Enter a & b: ");
    scanf("%d %d",&a,&b);
    mm(a,b);
}
void mm(int a,int b){
    if(a>b){
        printf("a is largest Number");
    }
    else{
        printf("b is largest Number");
    }
}