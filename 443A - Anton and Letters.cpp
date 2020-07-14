#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int alpha[26],i,x,sum=0;
    for(i=0;i<26;i++){
        alpha[i]=0;
    }
    char arr[1000];
    cin.getline(arr, 1000);
    int len = strlen(arr);
    for(i=1;i<len-1;i+=3){
        x = arr[i]-'a';
        alpha[x]++;
    }
    for(i=0;i<26;i++){
        if(alpha[i]>0)
            sum++;
    }
    cout<<sum<<endl;
}
