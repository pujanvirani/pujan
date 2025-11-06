// return the maximum of three floating-point numbers
#include<stdio.h>
void max(float a,float b,float c);
void main(){
    float a,b,c;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);
    max(a,b,c);

}
void max(float a,float b,float c){
if(a>b){
    if(a>c){
        printf("a is largest");
    }
    else{
        printf("c is largest");
    }
}
else if(b>c){
    printf("b is largest");
}
else{
    printf("c is largest");
}
}