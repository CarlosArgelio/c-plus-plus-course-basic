#include <iostream>

using namespace std;

int main() {
    int age = 0;
    cout << "age: " << endl;
    cin >> age;
    if ( age < 18 ) {
        cout << "No puedes votar" << endl;
    } else if ( age > 40 ) {
        cout << "No puedes votar" << endl;
    } else {
        cout << "Puedes votar" << endl;
    }
    
}