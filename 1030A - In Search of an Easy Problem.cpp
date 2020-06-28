#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        if(x==1){
            printf("HARD\n");
            return 0;
        }
    }
    printf("EASY\n");
    return 0;
}
