#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,mi=0,ch=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b){
            mi++;
        }
        else if(a<b){
            ch++;
        }
    }
    if(mi==ch){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(mi>ch){
        cout<<"Mishka"<<endl;
    }
    else if(mi<ch){
        cout<<"Chris"<<endl;
    }
}
