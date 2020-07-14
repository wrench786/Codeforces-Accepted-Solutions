#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,alpha[26],i,x,co=0;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n+1);
    for(i=0;i<26;i++){
        alpha[i]=0;
    }
    for(i=0;i<n;i++){
        if(arr[i]>=65 && arr[i]<=90){
            x = arr[i]-'A';
            alpha[x]++;
        }
        else if(arr[i]>=97 && arr[i]<=122){
            x = arr[i]-'a';
            alpha[x]++;
        }
    }
    for(i=0;i<26;i++){
        if(alpha[i]==0){
            co++;
        }
    }
    if(co>0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
