#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[101],upp[101],low[101];
    scanf("%s",&arr);
    int i,len=strlen(arr),up=0,lo=0;
    for(i=0;i<len;i++){
        if(arr[i]>=65 && arr[i]<=90){
            up++;
            upp[i] = arr[i];
            low[i] = 'a' + (arr[i]-'A');
        }
        else if(arr[i]>=97 && arr[i]<=122){
            lo++;
            low[i] = arr[i];
            upp[i] = 'A' + (arr[i]-'a');
        }
    }
    upp[len]='\0';
    low[len]='\0';
    if(up<=lo){
        printf("%s\n",low);
    }
    else{
        printf("%s\n",upp);
    }
}
