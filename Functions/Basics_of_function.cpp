#include <iostream>
using namespace std;
void a(){
    cout<<"Hello"<<endl;
}
void b(){
    a();
    cout<<"Hello world"<<endl;
}
void c(){
    cout<<"Hi user"<<endl;
    b();
}
int main(){
    c();
}