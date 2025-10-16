#include"stdio.h"
#include"math.h"

void main() {
    
    int i,n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("Enter no. : ");
        scanf("%d",&a[i]);
    }

    int sum=0;
    for(i=0;i<n;i++){
        sum = sum + a[i];
    }

    printf("Average = %f\n",sum/(float)n);

    printf("Harmonic mean = %f\n",pow(sum,1/n));

    float insum = 0;
    for(i=0;i<n;i++){
        insum = insum + 1/a[i];
    }

    printf("Geometric mean = %f\n",(float)n/insum);

}