// #include <iostream>
// using namespace std;
// int main (){
    
//     int arr[]={62,55,99,44,88,60};
//     int n= sizeof(arr)/4;
//     int max=0;

//     for(int i=0 ; i<n; i++){
//        if(arr[i]>max) max=arr[i];
//     }
//     cout<<max;
// }

#include <iostream>
using namespace std;
int main (){
    
    int arr[]={-62,-55,-99,-44,-88,-60};
    int n= sizeof(arr)/4;
    int max= INT_MIN;

    for(int i=0 ; i<n; i++){
       if(arr[i]>max) max=arr[i];
    }
    cout<<max;
}