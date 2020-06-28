#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        sum=sum+x;
    }
    printf("%.12lf",(double)sum/n);
}
