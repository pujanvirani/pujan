#include<stdio.h>
void main(){
    int a,b;
    char c;
    printf("ENter a , Enter b");   
    scanf("%d %c %d",&a,&c,&b);
    switch(c){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
    }
    
}