#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        long long int n;
        std::cin>>n;
        int co=0;
        bool ans = true;
        while(n!=1){
            if(n%2==0 && n%5==0){
                n/=2;
            }
            else if(n%3==0 && n%5==0){
                n = (2*n)/3;
            }
            else if(n%2==0){
                n/=2;
            }
            else if(n%3==0){
                n = (2*n)/3;
            }
            else if(n%5==0){
                n = (4*n)/5;
            }
            else{
                ans = false;
                break;
            }
            co++;
        }
        (ans)?
        std::cout<<co<<std::endl:
        std::cout<<-1<<std::endl;
    }
}
