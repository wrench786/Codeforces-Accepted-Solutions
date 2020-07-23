#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d,co=0,i;
    cin>>k>>l>>m>>n>>d;
    if(k==1 || l==1 || m==1 || n==1){
        cout<<d<<endl;
    }
    else{
        int arr[d];
        for(i=0;i<d;i++){
            arr[i]=1;
        }
        for(i=0;i<d;i++){
            if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0){
                arr[i]--;
            }
        }
        for(i=0;i<d;i++){
            if(arr[i]==0){
                co++;
            }
        }
        cout<<co<<endl;
    }
}
