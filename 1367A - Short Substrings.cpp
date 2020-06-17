#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        char arr[101];
        cin.getline(arr,101);
        printf("%c",arr[0]);
        int i,len = strlen(arr);
        for(i=1;i<len-1;i+=2){
            if(arr[i]==arr[i+1]){
                printf("%c",arr[i]);
            }
        }
        printf("%c\n",arr[len-1]);
    }
}
