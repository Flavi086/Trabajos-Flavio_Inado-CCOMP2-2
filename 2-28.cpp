#include <iostream>
using namespace std;
int main(){
    int n;
    int a1,a2,a3,a4;
    string b;
    cin>>n;
    a1=n/1000;
    a2=(n%1000)/100;
    a3=(n%100)/10;
    a4=n%10;
    b="  ";
    cout<<a4<<b<<a3<<b<<a2<<b<<a1<<endl;
    return 0;
} 