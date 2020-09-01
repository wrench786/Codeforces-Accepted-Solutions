#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    auto t=0;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<int>vec(n);
        for(i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int minim= vec[1]-vec[0];
        for(i=1;i<n-1;i++){
            if(vec[i+1]-vec[i]<minim){
                minim = vec[i+1]-vec[i];
            }
        }
        cout<<minim<<endl;
    }
}
