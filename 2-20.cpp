#include <iostream>
using namespace std;
int main(){
    int r;
    float pi;
    pi=3.14159;
    cout<<" Digite el radio del circulo "<<endl;
    cin>>r;
    int diametro;
    float circun,area;
    diametro=r+r;
    circun= 2*pi*r;
    area=pi*(r*r);
    cout<<" El diametro es: "<<diametro<<endl;
    cout<<" La circunferencia es: "<<circun<<endl;
    cout<<" El area es: "<<area<<endl;


    return 0;
}   


