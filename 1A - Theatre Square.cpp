#include<iostream>
using namespace std;

int main()
{
    long long int n,k,a;
    cin>>n>>k>>a;
    if(n%a==0){
        if(k%a==0){
            cout<<(n/a)*(k/a)<<endl;
        }
        else{
            cout<<(n/a)*(k/a+1)<<endl;
        }
    }
    else{
        if(k%a==0){
            cout<<(n/a+1)*(k/a)<<endl;
        }
        else{
            cout<<(n/a +1)*(k/a +1)<<endl;
        }
    }
}
