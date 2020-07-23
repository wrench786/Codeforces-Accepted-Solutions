#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[4],i,maxim,k;
    for(i=0;i<4;i++){
        cin>>x[i];
    }
    maxim = x[0];
    for(i=1;i<4;i++){
        if(x[i]>maxim){
            maxim = x[i];
            k=i;
        }
    }
    for(i=0;i<4;i++){
        if(x[i]==maxim){
            continue;
        }
        else{
            if(i==3){
                cout<<maxim-x[i]<<" "<<endl;
            }
            else{
                cout<<maxim-x[i]<<" ";
            }
        }
    }
}
