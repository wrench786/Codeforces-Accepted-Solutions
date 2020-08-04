#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr[101];
    cin.getline(arr, 101);
    int len = strlen(arr),i;
    int sol=0;
    for(i=1;i<len;i++){
        if(arr[i]>=97 && arr[i]<=122){
            sol=1;
            break;
        }
    }
    if(sol){
        cout<<arr<<endl;
    }
    else{
        for(i=0;i<len;i++){
            if(arr[i]>=65 && arr[i]<=90){
                arr[i] = 'a' + (arr[i]- 'A');
            }
            else if(arr[i]>=97 && arr[i]<=122){
                arr[i] = 'A' + (arr[i]- 'a');
            }
        }
        cout<<arr<<endl;
    }
}
