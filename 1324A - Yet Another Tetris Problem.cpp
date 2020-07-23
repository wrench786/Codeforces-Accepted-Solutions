#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        int arr[n],mi,k;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        mi=arr[0];
        for(i=1;i<n;i++){
            if(arr[i]<mi){
                mi = arr[i];
                k=i;
            }
        }
        for(i=0;i<n;i++){
            arr[i]-=mi;
            if(arr[i]%2!=0){
                cout<<"NO"<<endl;
                break;
            }
            if(i==n-1){
                cout<<"YES"<<endl;
            }
        }
    }
}
