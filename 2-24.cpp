#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Digite 2 números: "<<endl;
    cin>>a;
    cin>>b;
    if(a%2!=0){
        cout<<"Su primer digito es impar"<<endl;
        } 
    if(b%2!=0){
        cout<<"Su segundo digito es impar"<<endl;
        } 
    if((a+b)%2!=0){
        cout<<"La suma de sus digitos es impar"<<endl;
        } 
    return 0;
}  