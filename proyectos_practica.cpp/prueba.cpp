#include <iostream>
using namespace std;

int main() {
    int opcion;

    cout << "Menu:" << endl;
    cout << "1. Saludar" << endl;
    cout << "2. Despedirse" << endl;
    cout << "3. Decir mi nombre" << endl;

    cout << "Elija una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Hola, Emiliano!" << endl;
            break;

        case 2:
            cout << "Adios, que tenga buen día." << endl;
            break;

        case 3:
            cout << "Mi nombre es ChatGPT." << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
