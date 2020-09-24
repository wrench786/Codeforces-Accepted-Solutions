#include<iostream>

int main()
{
    long long int n,ev,od;
    std::cin>>n;
    if(n%2==0){
        ev=od=n/2;
    }
    else{
        ev = n/2;
        od = ev+1;
    }
    ev = ev*(ev+1);
    od = od*od;
    std::cout<<ev-od<<std::endl;
}
