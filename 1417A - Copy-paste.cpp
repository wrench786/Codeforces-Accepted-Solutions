#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int n,k,x,sum=0,target,ans=0;
        cin>>n>>k;
        vector<int>vec;
        for(int i=0;i<n;i++){
            cin>>x;
            vec.push_back(x);
            sum+=x;
        }
        sort(vec.begin(),vec.end());
        int minim = vec[0];
        for(int i=1;i<n;i++){
            ans+= (k -vec[i])/minim;
        }
        cout<<ans<<endl;
    }
}
