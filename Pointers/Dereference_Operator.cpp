#include<iostream>
using namespace std;
int main(){
    int x = 7;
//     int* p1 =&x;
//     int* p2 =&x;

//     cout<<p1<<" "<<&p1<<endl;
//     cout<<p2<<" "<<&p2<<endl;

// int* p =&x;
// cout<<*p; //*p is deference operator;

int *ptr =&x;
*ptr += 70;
cout<<x<<endl;

}
