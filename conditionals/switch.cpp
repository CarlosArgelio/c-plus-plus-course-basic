#include <iostream>

using namespace std;

int main() {
    int option = 0;

    cout << "Selecciona un numero 1 o 2" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Presionaste el numero 1" << endl;
        break;
    
    case 2:
        cout << "Presionaste el numero 2" << endl;
        break;

    default:
        cout << "Presiona un numero valido 1 o 2" << endl;
        break;
    }
}