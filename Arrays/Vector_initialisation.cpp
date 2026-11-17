#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {4,33,65,12,23};
    cout<<v[3]<<endl;
    cout<<v.size()<< " "<<v.capacity()<<endl;
    v.push_back(-6);
    cout<<v.size()<< " "<<v.capacity()<<endl;
}