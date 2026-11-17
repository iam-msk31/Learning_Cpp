#include <iostream>
#include <vector>
using namespace std;
int main(){  
    vector<int> v = {4,33,65,12,23};
    sort(v.begin()+1,v.end()-1);
   
    for(int ele:v){
        cout<<ele<<" ";

    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for(int ele:v) cout<<ele<<" ";

    return 0;
}