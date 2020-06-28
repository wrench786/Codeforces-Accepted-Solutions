#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a=0,d=0;
    scanf("%d",&n);
    char arr[n+1];
    getchar();
    scanf("%s",&arr);
    for(i=0;i<n;i++){
        if(arr[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a==d){
        printf("Friendship\n");
    }
    else if(a<d){
        printf("Danik\n");
    }
    else{
        printf("Anton\n");
    }
}
