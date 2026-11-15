// M-1

// #include <iostream>
// using namespace std;
// int main (){
    
//     int arr[]={-62,-55,99,4,38,60};
//     int n= sizeof(arr)/4;
//     int mx= INT_MIN;

//     for(int i=0 ; i<n; i++){
//        if(arr[i]>mx) mx=arr[i];
//     }

//     int smx= INT_MIN;

//     for(int i=0 ; i<n; i++){
//        if(arr[i]>smx && arr[i] != mx) smx=arr[i];
//     }
//     cout<<mx<<" "<<smx<<endl;
// }

// M-2

#include <iostream>
using namespace std;
int main (){
    
    int arr[]={-62,-55,99,4,38,60};
    int n= sizeof(arr)/4;
    int mx= INT_MIN;

    for(int i=0 ; i<n; i++){
       if(arr[i]>mx) mx=arr[i];
    }

    int smx= INT_MIN;

    for(int i=0 ; i<n; i++){
      if(arr[i]==mx) continue;
       if(arr[i]>smx) smx=arr[i];
    }
    cout<<mx<<" "<<smx<<endl;
}