#include<iostream>

int main()
{
    int n,i;
    std::cin>>n;
    for(i=0;i<n;i++){
        if(i%2==0){
            std::cout<<"I hate";
        }
        else{
            std::cout<<"I love";
        }
        if(i!=n-1){
            std::cout<<" that ";
        }
    }
    std::cout<<" it"<<std::endl;
}
