#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr[101];
    cin.getline(arr,101);
    int len = strlen(arr),i;
    bool ans = false;
    for(i=0;i<len;i++){
        if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='9'){
            ans = true;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
