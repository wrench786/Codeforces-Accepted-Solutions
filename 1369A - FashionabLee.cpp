#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,i;
    scanf("%lld",&x);
    while(x--){
        scanf("%lld",&n);
        if(n%4==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
