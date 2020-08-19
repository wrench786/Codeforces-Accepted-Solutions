#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,j,co=0;
        cin>>n;
        long long int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                co++;
            }
        }
        if(co+1==n){
            cout<<n<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}
