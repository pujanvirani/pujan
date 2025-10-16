#include"stdio.h"

void main() {

    int height[5],weight[5],i,j,count=0;

    printf("Enter Height(cm) and weight(kg) : ");
    for(i=0;i<5;i++){

        printf("Person %d : ",i+1);

        scanf("%d %d",&height[i],&weight[i]);

        if(height[i]>170&&weight[i]<50){
            count++;
        }
    }

    printf("Total persons having height greater than 170cm and weight less than 50kg = %d",count);

}