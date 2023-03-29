#include <iostream>
using namespace std;
int main(){
    cout<<" El modelo de automovil compartido es un Suzuki Celerio, se le daran los datos según esta informacion "<<endl;
    cout<<" Por favor dijite la siguiente información "<<endl;
    float mi,ga,ta,pe,pro;
    cout<<" Total de millas recorridas por dia: "<<endl;
    cin>>mi;
    cout<<" Costo por galón de gasolina: "<<endl;
    cin>>ga;
    cout<<" Tarifas de estacionamiento por día: "<<endl;
    cin>>ta;
    cout<<" Peajes por dia "<<endl;
    cin>>pe;
    cout<<"Su promedio de millas por galón es: "<<endl;
    cin>>pro;

    float eco;
    eco=(mi/pro)*ga;
    cout<<"Su gasto es galones de gasolina es de: "<<eco<<" Soles "<<endl;
    float total;
    total=eco+ta+pe;
    cout<<"Y al dia obtiene un gasto de "<<total<<" Soles "<<endl;
    return 0;
} 