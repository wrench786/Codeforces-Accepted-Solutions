#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int x,y,z,a,b,c;
        scanf("%d %d %d",&x,&y,&z);
        if(x==y && y==z){
            printf("YES\n");
            printf("%d %d %d\n",x,y,z);
        }
        else if(x!=y && y!=z && z!=x){
            printf("NO\n");
        }
        else if((x==y && x<z) || (y==z && y<x) || (z==x && z<y)){
            printf("NO\n");
        }
        else{
            if(x!=y){
                b = x;
                c = y;
                a = 1;
            }
            else if(x==y){
                a = x;
                b = z;
                c = 1;
            }
            printf("YES\n");
            printf("%d %d %d\n",a,b,c);
        }
    }
}
