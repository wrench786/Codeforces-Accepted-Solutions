#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,x,co=0,i;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>h){
            co+=2;
        }
        else{
            co++;
        }
    }
    printf("%d\n",co);
}
