#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr(6,3);
    for(int i =0; i<arr.size();i++){
    cout<<arr[i]<<" ";    
    }
    cout<<endl;
    arr.push_back(5);
    arr.push_back(45); //Add new element in array at end
    arr.pop_back(); //Remove last element from array
    for(int i =0; i<arr.size();i++){
    cout<<arr[i]<<" ";    
    }
    
}