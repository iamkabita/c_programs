#include<conio.h>
#include<stdio.h>

void main(){
    int i, j;
    for( i=1;i<=5;i++){
        for(j=1;j <= 9; j++){
            int start = 6 - i;            
            if(j == start){
                int count = i;
                while(count > 0){
                    printf("* ");
                    count--;
                }
                break;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
