#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ans=0,sum=0,maxim=0;
    cin>>t;
    vector<int>vec;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        sum+=x;
        if(x>maxim){
            maxim = x;
        }
    }
    ans = (maxim*t)-sum;
    cout<<ans<<endl;
}
