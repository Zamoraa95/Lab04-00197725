#include <iostream>
using namespace std;

int main(){
    string usuario, contra, manolo, wasd;
    int x, y, resultados, opcion;

    do{
      cout << "ingrese su usuario:\n" <<endl;  
      cin >> usuario;
      cout << "ingrese su clave:" <<endl;
      cin >> contra;
    } while(usuario != manolo);(contra != wasd);
    

    cout << "Sus credenciales son correctas" <<endl;
    cout << "Elija que operacion desea realizar\n";
    cout << "1.Sumar\n";
    cout << "2.Restar\n";
    cout << "3.Multiplicar\n";
    cout << "4.Dividir\n";
    cout << "5.Salir\n";    
    cout << "Digite su opcion: ";
    cin >> opcion;


    return 0;
}