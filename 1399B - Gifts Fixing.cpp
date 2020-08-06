#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        long long int arr[2][n],cand_min,oran_min,x,y,minim=0;
        for(i=0;i<2;i++){
            for(j=0;j<n;j++){
                cin>>arr[i][j];
                if(j==0){
                    minim = arr[i][j];
                }
                else if(arr[i][j]<minim){
                    minim = arr[i][j];
                }
            }
            if(i==0){
                cand_min = minim;
            }
            else{
                oran_min = minim;
            }
        }
        long long int ans = 0;
        for(j=0;j<n;j++){
            if(arr[0][j]>cand_min && arr[1][j]==oran_min){
                ans+= (arr[0][j]-cand_min);
            }
            else if(arr[0][j]==cand_min && arr[1][j]>oran_min){
                ans+= (arr[1][j]-oran_min);
            }
            else if(arr[0][j]>cand_min && arr[1][j]>oran_min){
                x = arr[0][j]-cand_min;
                y = arr[1][j]-oran_min;
                if(x>y){
                    ans+= x;
                }
                else if(x<y){
                    ans+= y;
                }
                else{
                    ans+= x;
                }
            }
        }
        cout<<ans<<endl;
    }
}
