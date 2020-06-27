#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr1[101],arr2[102];
    scanf("%s",&arr1);
    scanf("%s",&arr2);
    int len1 = strlen(arr1),co=0,i,j;
    int len2 = strlen(arr2);
    if(len1!= len2){
        printf("NO\n");
    }
    else{
        for(i=0,j=len1-1;i<len1;i++,j--){
            if(arr1[i]!=arr2[j]){
                co++;
            }
        }
        if(co>0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}
