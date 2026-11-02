#include <iostream>
using namespace std;
void swap (int& a , int& b){ //alias
    int temp = a;
    a = b ;
    b=temp;
}


int main(){
    int a = 8, b = 9;
    swap(a,b); // build in function
    cout<<a<<" "<<b<<endl;
}