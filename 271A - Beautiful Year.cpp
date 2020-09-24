#include<iostream>

int main()
{
    int n,a,b,c,d,x;
    std::cin>>x;
    while(1){
        x++;
        n = x;
        a = n%10;
        n/=10;
        b = n%10;
        n/=10;
        c = n%10;
        n/=10;
        d =n;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            std::cout<<x<<std::endl;
            break;
        }
    }
}
