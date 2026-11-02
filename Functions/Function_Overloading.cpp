#include <iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}

void fun(int x){
    cout<<"Hello"<<endl;
}

// This will give Error
// void fun(int x = 7){
//     cout<<"Hello JS"<<endl;
// }

void fun(int x,int y){
    cout<<"Good Morning"<<endl;
}
int main(){
    fun();

}