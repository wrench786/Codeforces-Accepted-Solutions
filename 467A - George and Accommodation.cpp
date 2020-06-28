#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,co=0,p,q;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&p,&q);
        if(p+2<=q){
            co++;
        }
    }
    printf("%d\n",co);
}
