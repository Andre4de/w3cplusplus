#include <iostream>
using namespace std;
void myFunction(){
    for (int x = 0; x < 6; x++){
        cout << x << "\n";
    }
}
int main(){
    cout << "Hello world!\n";
    myFunction();
    return 0;
}