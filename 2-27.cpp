#include <iostream>
using namespace std;
int main(){
    char x;
    cout<<"Tecla a mostrar equivalencia: ";
    cin>>x;
    cout<<x<<"=";
    cout<<static_cast<int>(x);
    
    return 0;
}  