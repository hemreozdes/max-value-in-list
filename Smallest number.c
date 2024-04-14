#include <stdio.h>
int i,k;
void FindSmall(int[]);
int main(){
	int order = 1,nums;
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
    FindSmall(listt);
    return 0;
}
void FindSmall(int Fsmall[]){
        int small;
        small=Fsmall[0];
        for(k=1;k<i;k++){
            if(Fsmall[k]<small){
                small=Fsmall[k];
            }
        }
    printf("Smallest number is %d",small);}


