#include<stdio.h>
int main(){
    int i, j;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i==j && i<3 && i>0){
                printf("@\t");
            }
            else if(i==1 && j==2){
                printf("@\t");
            }
            else if(i==2 && j==1){
                printf("@\t");
            }
            else{
                printf("*\t");
            }
        }
        printf("\n");
    }
    return 0;
}