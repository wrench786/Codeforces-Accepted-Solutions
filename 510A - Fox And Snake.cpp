#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int row,col,i,j,co=0;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i%2==1){
                if(co==0){
                    if(j==col-1){
                        printf("#");
                    }
                    else{
                        printf(".");
                    }
                }
                else if(co==1){
                    if(j==0){
                        printf("#");
                    }
                    else{
                        printf(".");
                    }
                }
                if(j==col-1){
                    if(co==0){
                        co=1;
                    }
                    else{
                        co=0;
                    }
                }
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
}
