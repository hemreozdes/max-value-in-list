#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,maxValue,k;
    printf("How many values will you enter?");scanf("%d",&n);
    int max[n];
    for(i=0;i<n;i++){
        printf("Enter list values= ");scanf("%d",&max[i]);
    }
    maxValue=max[0];
    for(k=1;k<n;k++){
        if(max[k]>maxValue){
            maxValue=max[k];
        }
    }
    printf("The maximum value is %d",maxValue);
    return 0;
}
