#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,i,zero=0,one=0;
        cin>>n;
        cin.ignore();
        x = n;
        x = x*2-1;
        char arr[x+1];
        cin>>arr;
        for(i=0;i<x;i++){
            if(arr[i]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }
        if(zero>one || x==zero){
            for(i=0;i<n;i++){
                cout<<0;
            }
            cout<<endl;
        }
        else{
            for(i=0;i<n;i++){
                cout<<1;
            }
            cout<<endl;
        }
    }
}
