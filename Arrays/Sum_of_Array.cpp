#include <iostream>
using namespace std;
int main (){
    
    int arr[]={62,55,66,44,88,60};
    int n= sizeof(arr)/4;
    int sum=0;

    for(int i=0 ; i<n; i++){
        sum+=arr[i];
    }
    cout<<sum;
}