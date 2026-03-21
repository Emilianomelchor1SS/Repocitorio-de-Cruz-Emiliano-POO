#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

struct Alumno { // se crea el struct Alumno para almacenar los datos de cada alumno.
    string ubicacion_en_vector;
    string nombre;
    string numerocntrl;
    string carrera;
   
};

 int main() {
 
    vector<Alumno> inf_alumnos;// se le declara el vector como "inf_alumnos" para que pueda ser utilizado en todo el programa.
    int opcion;// while ( true) para que el menu sea infinito Por que true no puede ser modificado.
    while (true) {
        
        Alumno temp;

        cout << "Menu:" << endl;
        cout << "1. Verifica el numero de control para ingreso"<< endl;
        cout << "2. Agregar a nuevo alumno" << endl;
        cout << "3. Mostrar todos los alumnos" << endl;
        cout << "4. Eliminar alumno (numero de control)" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        if (cin.fail()) {
            cin.clear(); // Limpia el estado de error de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Elimina las letras del buffer
            cout << "\n>> Error: Entrada invalida. Por favor ingrese un NUMERO." << endl;
            continue; // Vuelve al inicio del while(true) inmediatamente
        }

        switch (opcion) {
               char eleccioncarrera;
           case 1: {
            if (inf_alumnos.empty()) {// verifica si el vector esta vacio, si empty es true, si no es false.
        cout << "Ingrese alumnos para que puedan ser verificados, regresando al menu " << endl;
        break;
    } 
   
    else { 
        string decision;
                
                do{    
                    cout << "Ingrese numero de control a verificar: ";
                    string num;
                    cin >> num;
                    bool encontrado = false;
                    for (const auto &a : inf_alumnos) {//  for es un ciclo que recorre todos los elementos de inf_alumnos            a = inf_alumnos = vector que alamcena todos los struct "Alumno" = todos los datos que estan dentro de Alumno
                        // se utiliza const auto &a para evitar copiar los elementos y mejorar el rendimiento                         estan a = todos los datos que estan en los struct Alumno dentro del vector inf_alumnos.
                        // const para que no se modifiquen los elementos dentro del ciclo y no se realice una iteracion innecesaria( verifique un dato varoias veces)
                        // & para evitar copiar los elementos y mejorar el rendimiento
                        // auto para que el compilador infiera el tipo de dato automaticamente  
                        // se utiliza : y no = por la sintaxis del for.
                        if (a.numerocntrl == num) {
                            encontrado = true;
                            
                        }
                        if (encontrado) {
                            cout << "Numero de control encontrado. Acceso permitido." << endl;

                        } else {
                            cout << "Numero de control NO encontrado. Acceso denegado, entregue su identificacion." << endl;
                            
                        }
                        break;
                    }
                    cout << "Desea ingresar otro alumno?";
                    cin >> decision;    
                } while(decision == "si" || decision == "Si" || decision == "SI" || decision == "sI");
               
            }
           
  break;// vuelve al do que reinicia el menu principal.
  }
           
            case 2: {
    string respuesta;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    do {
        Alumno temp;
        // limpiar el '\n' que queda por la lectura del menú (cin >> opcion)
        

        cout << "Ingrese nombre del alumno: ";
        getline(cin, temp.nombre);// Usar getline para capturar toda la línea o todos los nombres si tiene espacios.

        cout << "Ingrese numero de control: ";
        getline(cin, temp.numerocntrl);

        // Selección de carrera (lee un carácter y limpia resto de línea)
        while (true) {
            cout << "Ingrese carrera (A)Administracion  (B)Ingenieria en Sistemas  (C)Gestion Empresarial: ";
            char eleccion;
            if (!(cin >> eleccion)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Entrada inválida. Intente de nuevo.\n";
                continue;
            }
            eleccion = toupper(static_cast<unsigned char>(eleccion));
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpiar resto de línea para próximas lecturas (getline).

            if (eleccion == 'A') { temp.carrera = "Administracion"; break; }
            if (eleccion == 'B') { temp.carrera = "Ingenieria en Sistemas"; break; }
            if (eleccion == 'C') { temp.carrera = "GESTION EMPRESARIAL"; break; }

            cout << "Opcion no valida. Por favor ingrese de nuevo.\n";
        }

        inf_alumnos.push_back(temp);

        cout << "Alumno agregado exitosamente. ¿Desea agregar otro alumno? (si/no): ";
        getline(cin, respuesta); // Usar getline para capturar toda la línea 

    } while (respuesta == "si"|| respuesta == "Si" || respuesta == "SI" || respuesta == "sI");
    break;
}
            case 3:{
            if (inf_alumnos.empty()) {
        cout << "No hay alumnos registrados." << endl;
        break;
    }
    cout << "Listado de alumnos (orden guardado):" << endl;
    int i = 1;
    for (const auto &a : inf_alumnos) {
        cout << i++ << ") Nombre: " << a.nombre << '\n'
             << "   Número de control: " << a.numerocntrl << '\n'
             << "   Carrera: " << a.carrera << '\n';
    }
    break;}

 case 4: {
       
        if (inf_alumnos.empty()) {
            cout << "////////////////////////////No hay alumnos registrados para eliminar,volviendo al menu.\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
        } 
        else {
           
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Ingrese el numero de control del alumno a eliminar: ";
            string eliminar;
            getline(cin, eliminar);

            bool borrado = false;

            
            for (auto it = inf_alumnos.begin(); it != inf_alumnos.end(); ++it) { // usamos el iterador it para recorrer el vector, it empieza en begin() y termina en end()
                if (it->numerocntrl == eliminar) {                               // it es commo un puntero que apunta a cada struct Alumno dentro del vector inf_alumnos
                                                                                // usamos el .begin() y .end() para obtener el inicio y el final del vector
                    cout << "Eliminando a: " << it->nombre << "..." << endl;   // se usa ! mientras it no sea igual a end() se sigue recorriendo el vector 
                                                                               // it++ para avanzar al siguiente elemento del vector
                                                                               // se usa -> para acceder a los miembros del struct Alumno al que apunta el iterador it y que se haga el cambio

                    
                    
                    inf_alumnos.erase(it); // erase elimina el elemento al que apunta el iterador it del vector inf_alumnos
                    
                    cout << "Alumno eliminado correctamente." << endl;
                    borrado = true;
                    break; 
                }
            }

            if (!borrado) {
                cout << "No se encontro un alumno con ese numero de control." << endl;
            }
        }
        break;
     }
            
        default:
               
                break; 
           
    }   
    
    
    
}
 }
 
