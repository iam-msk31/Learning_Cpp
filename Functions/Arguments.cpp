#include <iostream>
using namespace std;
void minOfTwo(int a, int b){ // will recive 2 numbers  and print the min one
    if(a<b) cout<<a<<" is smaller"<<endl;
    else cout<<b<<" is smaller"<<endl;
}

int main(){
    minOfTwo(99,29);
}
