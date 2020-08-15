#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,i;
        cin>>n;
        long long int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]+arr[1]<=arr[n-1]){
            cout<<1<<" "<<2<<" "<<n<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
