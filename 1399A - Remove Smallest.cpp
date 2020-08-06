#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,j,temp;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        bool ans = true;
        for(i=0;i<n-1;i++){
            if(arr[i]+1==arr[i+1] || arr[i]==arr[i+1]){
                continue;
            }
            else{
                ans = false;
                break;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
