#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Digite 5 números: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    int mayor, menor;
    if (a>=b and a>=c and a>=d and a>=e){
        mayor=a;
        } 
    if (b>=a and b>=c and b>=d and b>=e){
        mayor=b;
        } 
    if (c>=b and c>=a and c>=d and c>=e){
        mayor=c;
        } 
    if (d>=b and d>=c and d>=a and d>=e){
        mayor=d;
        } 
    if (e>=b and e>=c and e>=a and e>=d){
        mayor=e;
        } 
    if (a<=b and a<=c and a<=d and a<=e){
        menor=a;
        } 
    if (b<=a and b<=c and b<=d and b<=e){
        menor=b;
        } 
    if (c<=b and c<=a and c<=d and c<=e){
        menor=c;
        } 
    if (d<=b and d<=c and d<=a and d<=e){
        menor=d;
        } 
    if (e<=b and e<=c and e<=a and e<=d){
        menor=e;
        } 
    cout<<" El mayor es: "<<mayor<<" y el menor es: "<<menor<<endl;
    return 0;
}  