#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(45);
    cout<<v.size()<< " "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.size()<< " "<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.size()<< " "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.size()<< " "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<< " "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<< " "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<< " "<<v.capacity()<<endl<<endl;





    // v.push_back(45);
    // v.push_back(5);
    // v.push_back(0);
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(1);
    for(int i=0;i<v.size( ) ;i++){
        cout<<v[i]<<" ";
    }

    
    
}