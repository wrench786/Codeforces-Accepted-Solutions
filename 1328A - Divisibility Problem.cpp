#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int a,b,ans=0;
        std::cin>>a>>b;
        ans=a%b;
        (ans==0)?
        std::cout<<ans<<std::endl:
        std::cout<<b-ans<<std::endl;
    }
}
