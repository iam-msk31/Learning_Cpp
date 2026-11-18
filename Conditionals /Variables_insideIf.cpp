#include<iostream>
using namespace std ;
int main (){
    // int x =1; //  0 will be false & any thing except 0 is true 
    // if(x) cout<<"raghav";
    // else cout<<"Raghav";

    // int a = 0 ;
    // if(a=2) cout<<"garg";
    // else cout<<"Garg";

    // if("d")cout<<"hey"; // ascii value of d will execute in if statement
    // else cout<<"Hello";

    // int x = 4;
    // if(x++)cout<<x;
    // else cout<<"nothing";
 
 // --> Short circuiting

    int x =4 , y =6;
    if(x++||y++) cout<<x<<y; // we are using or operator so either x++ or y++ will execute in if statement
    else cout<<"Hello cpp"; 
}