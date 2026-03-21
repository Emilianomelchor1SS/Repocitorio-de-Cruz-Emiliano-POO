#include <iostream>
using namespace std;
#include <limits>
int main() {
 int opcion;
 while (true) {
cout << "me perdonas mi vida?" << endl;
cout << "1. Me perdonas?" << endl;
cout<<"2. No me perdonas" << endl;
cin >> opcion;

       if (cin.fail()) {
            cin.clear(); // limpia el error
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida. Use solo numeros validos.\n";
            continue;
        }
switch (opcion) {
 case 1:{
 cout << " YUPIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << endl;
 break;
 }
 
 case 2:{
 cout << "por favor" << endl;
 break;
}
 default:
    cout << "opcion invalida, intente de nuevo" << endl;

}
}
}