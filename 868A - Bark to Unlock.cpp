#include<stdio.h>
using namespace std;

int main()
{
    char x[3];
    scanf("%s",&x);
    int n;
    scanf("%d",&n);
    getchar();
    char arr[3],a,b;
    a = x[0];
    b = x[1];
    int mil=0,co=0,n1=0,n2=0,i;
    for(i=0;i<n;i++){
        scanf("%s",&arr);
        if(arr[0]==a && arr[1]==b){
            mil++;
        }
        else{
            if(arr[1]==a){
                n1++;
            }
            if(arr[0]==b){
                n2++;
            }
        }
    }
    if(mil>0){
        printf("YES\n");
    }
    else if(n1>0 && n2>0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
