#include<stdio.h>

using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    while(k--){
        if(n%10==0){
            n =n/10;
        }
        else{
            n--;
        }
    }
    printf("%d\n",n);
}
