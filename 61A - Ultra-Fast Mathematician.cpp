#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr1[101];
    char arr2[101];
    scanf("%s",&arr1);
    scanf("%s",&arr2);
    int len =strlen(arr1);
    for(int i=0;i<len;i++){
        if(arr1[i]!=arr2[i]){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}
