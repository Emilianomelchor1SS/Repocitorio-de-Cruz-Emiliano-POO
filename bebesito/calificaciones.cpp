#include<iostream>
using namespace std;
#include <string>
int main(){
int calificacion1, calificacion2, calificacion3;
int sobresaliente;
int aprobado;
int reprobado;
cout<<"ingrese la calificacion1: ";
cin>>calificacion1;
cout<<"inggrese la calificacion2: ";
cin>>calificacion2;
cout<<"ingrese la calificacion3: ";
cin>>calificacion3;
sobresaliente= (calificacion1 + calificacion2 + calificacion3) / 3;
aprobado= (calificacion1 + calificacion2 + calificacion3) / 3;
reprobado= (calificacion1 + calificacion2 + calificacion3) / 3;
if (sobresaliente >= 8){
    cout<<"SU CALIFICACION ES SOBRESALIENTE: "<< sobresaliente<<endl;
} else if (aprobado >= 6){
    cout<<"su calificacion es aprobatoria "<< aprobado<<endl;
} else if (reprobado < 6){
    cout<<"su calificacion es reprobatoria "<< reprobado<<endl;
    system("pause");
    
}
}
