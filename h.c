#include<stdio.h>
void main(){
    int a[5], b[5], i, j, sum;
    printf("Enter the elements:");
    for(i=0;i<5;i++) { 
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++){
        sum=0;
        for(j=0; j<5; j++){
            if(a[i]>a[j]){
                sum+=1;
            }
        }
        b[sum]=a[i];
    }
    printf("The elements in ascending order are: \n");
    for (i=0;i<5;i++) { 
        printf("\n%d", b[i]);
    }
}