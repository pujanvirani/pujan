#include "stdio.h"
#include "string.h"

void main() {
    char a[100];
    printf("Enter a string: ");
    gets(a);

    printf("Length of String = %d\n",strlen(a));
    printf("String : %s",a);

}