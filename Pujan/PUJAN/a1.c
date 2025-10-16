#include<stdio.h>
void main (){
int a;
printf("Enter day 1 to 7");
scanf("%d",&a);
switch (a)
{
case 1:
    printf("sunday");
    break;
case 2:
    printf("monday");
    break;
case 3:
    printf("tuesday");
    break;
case 4:
    printf("wednesday");
    break;
case 5:
    printf("thurshday");
    break;
case 6:
    printf("friday");
    break;
case 7:
    printf("saturday");
    break;

default:
printf("Invalid day");
    break;
}
}