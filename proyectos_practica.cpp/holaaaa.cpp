#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    int numerocntrl;
    string carrera;
};


int main() {
    int opcion;
    string temp;
    string respuesta;
     cout << "Menu:" << endl;
    cout << "1. Verifica el numero de control para ingreso" << endl;
    cout << "2. Agregar a nuevo alumno" << endl;
    cout << "3. Buscar alumno (numero de control o nombre)" << endl;
    cout << "4. Mostrar todos los alumnos" << endl;
      cout << "Elija una opcion: ";
    cin >> opcion;


    vector<Alumno> inf_alumnos;


    switch (opcion) {
        case 1:
            cout << "Verificacion del numero de control para ingreso" << endl;
            
            break;

        case 2:
        
            do{
            Alumno temp;
            cout << "Agregar a nuevo alumno." << endl;
            cout << "Ingrese nombre del alumno: "<< endl;
            cin >> temp.nombre;
            cout << "Ingrese numero de control: "<< endl;
            cin >> temp.numerocntrl;
            cout << "Ingrese carrera: "<< endl;
            cout << "Desea agregar otro alumno? (si/no)" << endl;
            cin >> temp.carrera;

                inf_alumnos.push_back(temp);  
            
            cout << "alumno agregado exitosamente, desea agregar de a otro alumno?." << endl;}
            while(respuesta == "si"|| respuesta == "Si" || respuesta == "SI" || respuesta == "sI" );
            
              }
              break;
            }
           
        

             case 3:
             cout << "Busqueda de alumno" << endl;
            
            break; 
             
            case 4:
            cout << "Verificacion del numero de control para ingreso" << endl;
            
            break;
        
    
            

    

    default:
        cout << "Opcion no valida." << endl;




}
