#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int n,x,i,maxim,minim,max_in,min_in,ans=0;
    std::cin>>n;
    std::vector<int>vec;
    for(i=0;i<n;i++){
        std::cin>>x;
        vec.push_back(x);
    }
    maxim = *std::max_element(vec.begin(),vec.end());
    minim = *std::min_element(vec.begin(),vec.end());
    for(i=0;;i++){
        if(vec[i]==maxim){
            max_in =i;
            break;
        }
    }
    for(i=n-1;;i--){
        if(vec[i]==minim){
            min_in = i;
            break;
        }
    }
    ans = max_in;
    ans+= n-1-min_in;
    if(max_in<min_in){
        std::cout<<ans<<std::endl;
    }
    else{
        std::cout<<ans-1<<std::endl;
    }
}
