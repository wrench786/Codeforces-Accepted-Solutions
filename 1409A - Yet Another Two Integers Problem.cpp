#include<iostream>
#include<math.h>

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int a,b;
        std::cin>>a>>b;
        if(a==b){
            std::cout<<0<<std::endl;
        }
        else{
            int x = std::abs(a-b);
            if(x%10==0){
                std::cout<<x/10<<std::endl;
            }
            else{
                std::cout<<x/10+1<<std::endl;
            }
        }
    }
}
