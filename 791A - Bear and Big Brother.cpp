#include<stdio.h>

using namespace std;
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=0;a<=b;i++){
        a=3*a;
        b=2*b;
    }
    printf("%d\n",i);
}
