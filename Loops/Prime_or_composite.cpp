//  #include <iostream>
//  #include <cmath>
//  using namespace std;
//  int main(){
//    int n;
//      cout<<"Enter a number: ";
//      cin>>n;
//     int factor = 0;
//      for(int i=1;i<=n;i++){
//         if ( n%i==0){
//             factor++;
//         }    
//      }
//      if(factor==1)cout<<"Neither Prime nor Composite";
//      else if(factor>=3)cout<<"Composite number";
//      else cout<<"Prime number";
    
//  }



 #include <iostream>
 #include <cmath>
 using namespace std;
 int main(){
   int n;
     cout<<"Enter a number: ";
     cin>>n;
    bool flag = false;
     for(int i=2;i<=n-1;i++){
        if ( n%i==0){
            flag = true;
            break;
        }    
     }
     if(flag==true)cout<<"Composite number";
     else cout<<"Prime number";
    
 }