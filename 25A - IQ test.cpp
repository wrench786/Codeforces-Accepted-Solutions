#include<iostream>
#include<vector>

int main()
{
    int n,i,x,ev=0,od=0;
    std::cin>>n;
    std::vector<int>vec(n);
    for(i=0;i<n;i++){
        std::cin>>x;
        vec[i] = x;
        if(vec[i]%2==0){
            ev++;
        }
        else{
            od++;
        }
    }
    if(od==1){
        for(i=0;i<n;i++){
            if(vec[i]%2!=0){
                std::cout<<i+1<<std::endl;
            }
        }
    }
    else if(ev==1){
        for(i=0;i<n;i++){
            if(vec[i]%2==0){
                std::cout<<i+1<<std::endl;
            }
        }
    }
}
