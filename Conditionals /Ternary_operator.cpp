#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // (n%2 == 0) ? cout<<"Even": cout<<"Odd"; //M-1
    cout<<((n%2==0)? "Even" : "Odd"); //M-2
}