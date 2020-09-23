#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int n, k, l, c, d, p, nl, np;
    std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int sum_drink = k*l;
    int sum_slice = c*d;
    std::vector<int>vec;
    vec.push_back(sum_drink/nl);
    vec.push_back(sum_slice/1);
    vec.push_back(p/np);
    int ans = *std::min_element(vec.begin(),vec.end());
    std::cout<<ans/n<<std::endl;
}
