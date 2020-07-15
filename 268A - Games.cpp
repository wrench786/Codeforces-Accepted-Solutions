#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n,i,j,co=0,x,k;
    scanf("%d",&n);
    int arr[n][2];
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            x = arr[i][j];
            if(j==0){
                for(k=i+1;k<n;k++){
                    if(x==arr[k][1]){
                        co++;
                    }
                }
            }
            else{
                for(k=i+1;k<n;k++){
                    if(x==arr[k][0]){
                        co++;
                    }
                }
            }
        }
    }
    printf("%d\n",co);
}
