#include <iostream>
#include <vector>
using namespace std;
// void change(vector <int> v){ //pass by value
//     v[3]=99;
// }

void change(vector <int>& v){ // pass by reference
    v[3]=99;
}


int main(){  
    vector<int> v = {4,33,65,12,23};
    change (v);
    cout<<v[3]<<endl;


    return 0;
}