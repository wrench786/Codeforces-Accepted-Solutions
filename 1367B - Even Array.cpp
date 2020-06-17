#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    scanf("%d",&x);
    while(x--){
        int n,a=0,b=0,i,even,odd,co=0;
        scanf("%d",&n);
        int num[n];
        if(n%2==0){
            even = n/2;
            odd = n/2;
        }
        else{
            even = (n/2) +1;
            odd = n/2;
        }
        for(i=0;i<n;i++){
            scanf("%d",&num[i]);
            if(num[i]%2==0){
                a++;
            }
            else{
                b++;
            }
        }
        if(a==even && odd==b){
            for(i=1;i<n;i+=2){
                if(num[i]%2==0){
                    co++;
                }
            }
            printf("%d\n",co);
        }
        else{
            printf("%d\n",-1);
        }
    }
}
