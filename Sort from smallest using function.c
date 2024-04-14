#include <stdio.h>
void SortList(int []);
int k,i,temp;
int main(){
    int j,order=1,nums;
    printf("How many numbers do you want to compare?");scanf("%d",&i);
    int listt[i];
    for(k=0;k<i;k++){
        printf("Enter %d. number=",order);
        scanf("%d",&nums);
        listt[k]=nums;
        order++;
        }
    printf("numbers = ");
    for(k=0;k<i;k++)
        printf("%d ",listt[k]);
    printf("\n");
    SortList(listt);
    return 0;
}
void SortList(int sort[]){
    int j;
    for(k=0;k<i;k++){
        for(j=k+1;j<i;j++){
            if(sort[k]>sort[j]){
                temp=sort[k];
                sort[k]=sort[j];
                sort[j]=temp;
            }
        }
    }
    printf("Sort from smallest to largest: ");
    for(k=0;k<i;k++){
        printf("%d ",sort[k]);
    }
}
