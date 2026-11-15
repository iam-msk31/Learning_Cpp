#include <iostream>
using namespace std;
int main (){
    
    int arr[]={-62,-99,-44,-88,-60};
    int n= sizeof(arr)/4;
    int target = 55;
    bool flag =false ;  //False means not Present

    for(int i=0 ; i<n; i++){
       if(arr[i]==target) {
        flag = true; //true means present
        
        break;
       }
    }
    if(flag==true) cout<<"Element found "<<endl;
    else cout<<"Element Not found "<<endl;
    
    
}