#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k,maxim,i,maxim2;
        cin>>n>>k;
        long long int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(i==0){
                maxim = arr[i];
            }
            else if(arr[i]>maxim){
                maxim = arr[i];
            }
        }
        if(k%2!=0){
            for(i=0;i<n;i++){
                if(i==n-1){
                    cout<<maxim - arr[i]<<endl;
                }
                else{
                    cout<<maxim - arr[i]<<" ";
                }
            }
        }
        else{
            for(i=0;i<n;i++){
                arr[i] = maxim - arr[i];
                if(i==0){
                    maxim2 = arr[i];
                }
                else if(arr[i]>maxim2){
                    maxim2 = arr[i];
                }
            }
            for(i=0;i<n;i++){
                if(i==n-1){
                    cout<<maxim2 - arr[i]<<endl;
                }
                else{
                    cout<<maxim2 - arr[i]<<" ";
                }
            }
        }
    }
}
