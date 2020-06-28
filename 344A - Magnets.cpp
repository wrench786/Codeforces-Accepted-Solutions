#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,co=0;
    scanf("%d",&n);
    char arr[3];
    scanf("%s",&arr);
    co++;
    char x = arr[1];
    for(i=1;i<n;i++){
        scanf("%s",&arr);
        if(arr[0]==x){
            co++;
        }
        x = arr[1];
    }
    printf("%d\n",co);
}
