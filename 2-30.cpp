#include <iostream>
using namespace std;
int main(){
    float kg, al;
    cout<<"Introduzca su peso en kilogramos"<<endl;
    cin>>kg;
    cout<<"Introduzca su altura en metros"<<endl;
    cin>>al;
    float bmi;
    bmi=kg/(al*al);
    if(bmi<18.5){
        cout<<"Tu BMI indica que estas con bajo peso. ";
        }  
    if(bmi>18.5 and bmi<24.9){
        cout<<"Tu BMI indica que estas normal peso. ";
        }  
    if(bmi>25 and bmi<29.9){
        cout<<"Tu BMI indica que estas con sobre peso ";
        }  
    if(bmi>30){
        cout<<"Tu BMI indica que estas con obesidad ";
        }  

    return 0;
}  