#include<iostream>
#include<math.h>

int main()
{
    int x1,y1,x2,y2;
    std::cin>>x1>>y1>>x2>>y2;
    std::cout<<std::max(std::abs(x1-x2),std::abs(y1-y2))<<std::endl;
}
