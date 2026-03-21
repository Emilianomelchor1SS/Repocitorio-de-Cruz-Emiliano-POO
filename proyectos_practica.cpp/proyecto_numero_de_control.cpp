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
    //en esta variable se almacena la opcion que ingresara al case
    int opcion = 0;
    // arreglos para almacenar la información de los alumnos
    string matriculas[100];
    string nombres[100];
    string carreras[100];
    int semestres[100];
    int estadoCajones[100]; // aqui almacenamos el indice de la informacion del alumno que queda asignado a cada cajon
    // otras variables
    int totalAlumnos = 0; // contador de alumnos
    string matriculaBuscar;
    int indiceAlumnoEncontrado;
    int cajonAsignado;
 
    vector<Alumno> inf_alumnos;// se le declara el vector como "inf_alumnos" para que pueda ser utilizado en todo el programa.
    int opcion;// while ( true) para que el menu sea infinito Por que true no puede ser modificado.
    while (true) {
        
        Alumno temp;

        cout << "Menu:" << endl;
        cout << "1. Verifica el numero de control para ingreso"<< endl;
        cout << "2. Agregar a nuevo alumno" << endl;
        cout << "3. Mostrar todos los alumnos" << endl;
        cout << "4. Eliminar alumno (numero de control)" << endl;
        cout << "5. estacionamiento" << endl;
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
     case 5:{
      //Se inicializa el arreglo de estados de cajones con valor de -1, esto permite identificar los cajones vacios
    for (int i = 0; i < 100; i++) {
        estadoCajones[i] = -1; 
    }
    
    // En esta sección de código mostramos el menú que se mostrará al alumno
    do {
        cout << "****************************************************\n";
        cout << "SISTEMA DE ESTACIONAMIENTO TECNOLÓGICO DE ENSENADA \n";
        cout << "****************************************************\n";
        cout << "Ingresa una opción del 1 al 4: \n";
        cout << "1. Alta de Alumno\n";
        cout << "2. Ingreso (Asignar Cajón)\n" ;
        cout << "3. Salida (Liberar Cajón)\n";
        cout << "4. Salir del Programa\n";
        cout << "****************************************************\n";

        
        // se recibe y almacena en opcion
        cin >> opcion;
        cin.get(); 

        switch (opcion) {
            // Aquí se ejecuta el código para dar de alta a un alumno
            case 1: {
                cout << "\n********Alta de Alumno********\n";
                if (totalAlumnos >= 100) {
                    cout << "ERROR: Se alcanzó el límite de 100"; 
                    break;
                }
                
                string matriculaNueva;
                bool matriculaRepetida;
                
                // Validación para no repetir matrículas
                do {
                    cout << "Ingrese la matrícula (0,1,2,3 etc): ";
                    cin >> matriculaNueva; 
                    cin.get();
                    matriculaRepetida = false;
                    for (int i = 0; i < totalAlumnos; i++) {
                        if (matriculas[i] == matriculaNueva) {
                            cout << "La matricula ya se encuentra asignada";
                            matriculaRepetida = true;
                            break;
                        }
                    }
                } while (matriculaRepetida);
                
                // Se guardan los datos en el indice que devuelve la variable totalALumnos, esta la modificamos mas abajo
                matriculas[totalAlumnos] = matriculaNueva;
                cout << "Ingrese el nombre: ";
                getline(cin, nombres[totalAlumnos]);
                cout << "Ingrese la carrera: ";
                getline(cin, carreras[totalAlumnos]);
                cout << "Ingrese el semestre (número): ";
                cin >> semestres[totalAlumnos];
                
                totalAlumnos++; // se incrementa el contador de alumnos en uno
                cout << "\nAlumno registrado, Total de alumnos: " << totalAlumnos << endl;
                break;
            }
            
            // Sección para asignar cajón de estacionamiento
            case 2: {
                cout << "\n--- Ingreso a estacionamiento, Asignar Cajón ---\n";
                cout << "Ingresa la matrícula del alumno: ";
                cin >> matriculaBuscar;
                
                indiceAlumnoEncontrado = -1;
                
                // 1. Buscamos al alumno por matrícula y obtener su índice
                for (int i = 0; i < totalAlumnos; i++) {
                    if (matriculas[i] == matriculaBuscar) {
                        indiceAlumnoEncontrado = i;
                        break;
                    }
                }
                
                if (indiceAlumnoEncontrado != -1) {
                    // 2. Verificamos si ya tiene un cajón asignado/ocupado
                    cajonAsignado = -1;
                    for (int i = 0; i < 100; i++) {
                        if (estadoCajones[i] == indiceAlumnoEncontrado) {
                            cajonAsignado = i;
                            break;
                        }
                    }
                    
                    if (cajonAsignado != -1) {
                        cout << "\nEl alumno ya tiene cajon asignado es el #" << cajonAsignado + 1 << "\n";
                    } else {
                        // 3. Buscar el primer cajón libre (-1)
                        int cajonLibre = -1;
                        for (int i = 0; i < 100; i++) {
                            if (estadoCajones[i] == -1) {
                                cajonLibre = i;
                                break;
                            }
                        }
                        
                        if (cajonLibre != -1) {
                            // 4. Asignar el cajón
                            estadoCajones[cajonLibre] = indiceAlumnoEncontrado; 
                            cout << "Cajón #" << cajonLibre + 1 << " asignado a " << nombres[indiceAlumnoEncontrado] << ".\n";
                        } else {
                            cout << "Todos los " << 100 << " cajones están ocupados.\n";
                        }
                    }
                } else {
                    cout << "\nMatrícula no encontrada. No se puede asignar\n";
                }
                break;
            }
            
            // Liberar cajon
            case 3: {
                cout << "\n*****Salida,  Liberar Cajón *****\n";
                cout << "Ingrese la matrícula del alumno: ";
                cin >> matriculaBuscar;
                
                indiceAlumnoEncontrado = -1;
                
                // 1. Buscamos al alumno por matrícula
                for (int i = 0; i < totalAlumnos; i++) {
                    if (matriculas[i] == matriculaBuscar) {
                        indiceAlumnoEncontrado = i;
                        break;
                    }
                }
                
                if (indiceAlumnoEncontrado != -1) {
                    // 2. Buscar qué cajón tiene asignado
                    cajonAsignado = -1;
                    for (int i = 0; i < 100; i++) {
                        if (estadoCajones[i] == indiceAlumnoEncontrado) {
                            cajonAsignado = i;
                            break;
                        }
                    }
                    
                    if (cajonAsignado != -1) {
                        // 3. Liberar el cajón
                        estadoCajones[cajonAsignado] = -1; // -1 significa libre
                        cout << "\nCajón #" << cajonAsignado + 1 << " liberado por el alumno " << nombres[indiceAlumnoEncontrado] << ".\n";
                    } else {
                        cout << "\nEl alumno " << nombres[indiceAlumnoEncontrado] << " no tenía un cajón asignado.\n";
                    }
                } else {
                    cout << "\n Matrícula no encontrada.\n";
                }
                break;
            }

            case 4: {
                cout << "\n Saliendo..." << endl;
                break;
            }
            
            default: {
                cout << "\nOpción no válida. Por favor, ingresa un número del 1 al 4." << endl;
                cout << "Presiona ENTER para continuar...";
                
                cin.get(); 
                cin.get();
                break;
            }
        }
        
    } while (opcion != 4); 


     }
            
        default:
               
                break; 
           
    }   
    
    
    
}
 }
 
