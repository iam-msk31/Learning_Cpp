#include<iostream>
using namespace std;
int main(){
int x = 4;
{
int x=5; // variable shadowing
}
cout<<x<<endl;
}