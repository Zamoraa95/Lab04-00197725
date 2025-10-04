#include <iostream>
#include <string>
using namespace std;

int main(){
string usuario, clave;
string usuario_valido="Manolo";
string clave_valida="wasd";
float x, y, resultado;
int opcion;
int intentos = 3;

while(intentos > 0){
  cout << "Ingrese su usuario: "<<endl;
  cin >> usuario;
  cout << "Ingrese su clave de acceso: "<<endl;
  cin >> clave;

  if(usuario == usuario_valido && clave == clave_valida){
    cout << "---Credenciales correctas---" <<endl;

        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Salir\n";
        cout << "Seleccione una que operacion desea: ";
        cin >> opcion;
        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer numero: ";
            cin >> x;
            cout << "Ingrese el segundo numero: ";
            cin >> y;
        }if(opcion == 1){
          resultado = x + y;
          cout << "El resultado de la operacion es: " << resultado <<endl;
          break;
        }else if(opcion == 2){
          resultado = x - y;
          cout << "El resultado de la operacion es: " << resultado <<endl;
          break;
        }if(opcion == 3){
          resultado = x * y;
          cout << "El resultado de la operacion es: " << resultado <<endl;
          break;
        }else if(opcion == 4){
          resultado = x / y;
          cout << "El resultado de la operacion es: " << resultado <<endl;
          break;
        }if(opcion == 5){
          cout << "Cerrando calculadora"<<endl;
          break;
        }
  } else{
    cout << "Las credenciales no son correctas" <<endl;
    intentos--;
  }
}


return 0;
}
