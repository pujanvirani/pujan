#include<stdio.h>
void main (){
    int a=7;
    int *ptr1;
    float b=8.0000;
    float *ptr2;
    double c=9.0000000;
    double *ptr3;
    char ch='A';
    char *ptr4;
    ptr1=&a;
    prt2=&b;
    ptr3=&c;
    prt4=&ch;
    printf("%d %d",ptr1,*ptr1);
    printf("%f %f",ptr2,*ptr2);
    printf("%lf %lf",ptr3,*ptr3);
    printf("%c %c",ptr4,*ptr4);

}