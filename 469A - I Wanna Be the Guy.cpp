#include<iostream>
#include<vector>

int main()
{
    int n,x,p,y,q;
    std::cin>>n;
    std::vector<int>vec(n+1);
    std::cin>>x;
    while(x--){
        std::cin>>p;
        vec[p]++;
    }
    std::cin>>y;
    while(y--){
        std::cin>>q;
        vec[q]++;
    }
    bool ans=true;
    for(int i=1;i<=n;i++){
        if(vec[i]==0){
            ans=false;
        }
    }
    (ans)?
    std::cout<<"I become the guy."<<std::endl:
    std::cout<<"Oh, my keyboard!"<<std::endl;
}
