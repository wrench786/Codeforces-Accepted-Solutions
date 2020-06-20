#include<stdio.h>

using namespace std;
int main()
{
    int eleph=0,x,i;
    scanf("%d",&x);
    for(i=0;x!=eleph;i++){
        if(x-eleph>4){
            eleph+=5;
        }
        else if(x-eleph>3){
            eleph+=4;
        }
        else if(x-eleph>2){
            eleph+=3;
        }
        else if(x-eleph>1){
            eleph+=2;
        }
        else if(x-eleph>0){
            eleph+=1;
        }
    }
    printf("%d\n",i);
}
