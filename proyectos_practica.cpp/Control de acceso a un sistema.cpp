
#include <iostream>
#include <string>
using namespace std;
int main(){
 string username, password;
 int intentos = 0   ;
 
while (intentos < 3)
    {
          
        
        cout << "Ingrese el nombre de usuario:";
        cin >> username;
        cout<< "ingrese la contraseña:";
        cin >> password;
        
        if (username == "admin" && password == "1234"){
            cout << "acceso concedido\n";
            break;

            }
            else {
            cout <<"acesso denegado, intente de nuevo\n";
           intentos++;
           if (intentos < 3) {
               cout << "Intento " << intentos << " de 3.\n";
           }    
         

     }

}
  if (intentos == 3) {
        cout << "Cuenta bloqueada. Demasiados intentos.\n";
    }
}