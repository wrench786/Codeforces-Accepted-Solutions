#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    scanf("%d",&x);
    while(x--){
        long long int temp,i,a,b,n;
        scanf("%lld %lld %lld",&a,&b,&n);
        if(b>a){
            temp =a;
            a =b;
            b = temp;
        }
        for(i=0;;){
            b+=a;
            i++;
            if(b>n){
                break;
            }
            a+=b;
            i++;
            if(a>n){
                break;
            }
        }
        printf("%lld\n",i);
    }
}
