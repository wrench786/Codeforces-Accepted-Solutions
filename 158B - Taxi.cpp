#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,arr[n],one=0,two=0,three=0,four=0,sum=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            one++;
        }
        else if(arr[i]==2){
            two++;
        }
        else if(arr[i]==3){
            three++;
        }
        else if(arr[i]==4){
            four++;
        }
    }
    sum=four;
    if(three==one){
        sum+=three+ (two*2)/4;
        if((two*2)%4!=0){
            sum++;
        }
    }
    else if(three>one){
        sum+= one + (three-one) + (two*2)/4 ;
        if((two*2)%4!=0){
            sum++;
        }
    }
    else{
        sum+= three + (two*2)/4;
        if((two*2)%4 !=0){
            int x = 2 + (one-three);
            sum+=x/4;
            if(x%4!=0){
                sum++;
            }
        }
        else{
            sum+=(one-three)/4;
            if((one-three)%4!=0){
                sum++;
            }
        }
    }
    cout<<sum<<endl;
}
