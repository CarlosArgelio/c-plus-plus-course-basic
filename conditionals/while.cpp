#include <iostream>

using namespace std;

int main() {
    do {
        char response = 'o';
        cout << "Deseas terminar " << endl;

        cin >> response;

        if ( response == 'y' ) {
            cout << "bye" << endl;
            break;
        }
    } while (true);
}