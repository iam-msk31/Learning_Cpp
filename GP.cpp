#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    // for(int i =2 ; i<=3*n-1;i+=3){
    //     cout<<i<<" ";
    // }

    //     for(int i =1; i<=n;i++){
    //     cout<<3*i-1<<" ";
    // }

    //     int a =2 , r= 2;
    //     for(int i =1; i<=n;i++){
    //     cout<<a<<" ";
    //     a*= r ; 
    // }

        int a =1 , r= 2;
        for(int i =1; i<=n;i++){
        cout<<a<<" ";
        a*= r ; 
    }
}