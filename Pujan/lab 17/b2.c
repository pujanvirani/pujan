#include<stdio.h>
void main(){
     int n,i,temp;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    int b[n];
    for(i=0;i<n;i++){
       printf("Enter no: ");
       scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        temp=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=temp;
    
}
for(i=0;i<n;i++){
    printf("%d",*(a+i));
}
for(i=0;i<n;i++){
    printf("%d",*(b+i));
}
}