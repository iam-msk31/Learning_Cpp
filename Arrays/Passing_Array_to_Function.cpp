#include <iostream>
using namespace std;
void change (int y[]){
    y[0] = 30;
}
int main() {
    int x[] = {4,16,23};
    change (x);
    cout<<x[0]<<endl;


}