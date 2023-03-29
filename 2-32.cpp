#include <iostream>
using namespace std;
int main(){
    int edad;
    cout<<"Digite su edad: "<<endl;
    cin>>edad;
    float MHR1,MHR2,MHR3,MHR4,a,b,c,d;
    MHR1=220-edad;
    MHR2=208-0.7*(edad);
    MHR3=207-0.7*(edad);
    MHR4=211-0.64*(edad);
    
    a=MHR1;
    b=MHR2;
    c=MHR3;
    d=MHR4;
    float mayor, menor,segun,tercer;
    if (a>=b and a>=c and a>=d ){
        mayor=a;
        } 
    if (b>=a and b>=c and b>=d ){
        mayor=b;
        } 
    if (c>=b and c>=a and c>=d ){
        mayor=c;
        } 
    if (d>=b and d>=c and d>=a) {
        mayor=d;
        } 
   
    if (a<=b and a<=c and a<=d ){
        menor=a;
        } 
    if (b<=a and b<=c and b<=d ){
        menor=b;
        } 
    if (c<=b and c<=a and c<=d ){
        menor=c;
        } 
    if (d<=b and d<=c and d<=a ){
        menor=d;
        } 
    if (a<b and a>c and a>d ){
        segun=a;
        } 
    if (b<a and b>c and b>d ){
        segun=b;
        } 
    if (c<b and c>a and c>d ){
        segun=c;
        } 
    if (d<b and d>c and d>a ){
        segun=d;
        } 
    if (a<=b and a<=c and a>d ){
        tercer=a;
        } 
    if (b<=a and b<=c and b>d ){
        tercer=b;
        } 
    if (c<=b and c<=a and c>d ){
        tercer=c;
        } 
    if (d<=b and d<=c and d>a ){
        tercer=d;
        } 
  cout<<"Sus frecuencias fueron de mas alta a menor: "<<mayor<<" "<<segun<<" "<<tercer<<" "<<menor<<endl;
}  