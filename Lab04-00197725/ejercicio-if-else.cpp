#include <iostream> 
using namespace std;

int main(){
    int x;
    cout << "ingrese un numero: ";
    cin >> x;

    if(x < 10){
        cout << "su numero es menor a 10";
    } else if(x > 10){
        cout << "su numero es mayor a 10";
    } else{
        cout << "su numero es igual a 10";
    }

    return 0;
}