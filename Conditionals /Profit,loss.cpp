#include <iostream>
using namespace std;
int main(){
   int cp;
   cout<<"Enter cost price: ";
   cin>>cp;
   int sp;
   cout<<"Enter selling price: ";
   cin>>sp;
   if (sp>cp) cout<<"Profit";
   if (sp<cp) cout<<"loss";
   if (sp==cp) cout<<"No profit No loss";