#include <iostream>
using namespace std;
int main(){
    int a = 8, b = 9;
    cout<<a<<" "<<b<<endl;
    int temp =a;
    a=b;
    b=temp ;
    cout<<a<<" "<<b<<endl;
}