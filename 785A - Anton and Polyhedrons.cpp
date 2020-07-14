#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,sum=0,i;
    cin>>n;
    cin.ignore();
    char arr[15];
    for(i=0;i<n;i++){
        cin.getline(arr,15);
        if(arr[0]=='T'){
            sum+=4;
        }
        else if(arr[0]=='C'){
            sum+=6;
        }
        else if(arr[0]=='O'){
            sum+=8;
        }
        else if(arr[0]=='D'){
            sum+=12;
        }
        else if(arr[0]=='I'){
            sum+=20;
        }
    }
    cout<<sum<<endl;
}
