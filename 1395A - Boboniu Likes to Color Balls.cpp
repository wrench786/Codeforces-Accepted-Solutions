#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  while(n--){
    int arr[4],i,od=0,ev=0,ze=0;
    for(i=0;i<4;i++){
      cin>>arr[i];
      if(arr[i]==0){
        ze++;
      }
      else if(arr[i]%2==0){
        ev++;
      }
      else{
        od++;
      }
    }
    if(ze==0){
      if(od==ev){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    else if(ze==1 && arr[3]==0){
      if(ev==1 && od==2){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    else if(ze==1 || ze==2){
      if(od<=1){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else{
      cout<<"YES"<<endl;
    }
  }
}
