#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Introduzca un numero entero de cinco digitos: ";
    cin >> num;

    cout << "Digitos separados: ";

    int digito1 = num / 10000;
    cout << digito1 << "   ";
    num = num % 10000;

    int digito2 = num / 1000;
    cout << digito2 << "   ";
    num = num % 1000;

    int digito3 = num / 100;
    cout << digito3 << "   ";
    num = num % 100;

    int digito4 = num / 10;
    cout << digito4 << "   ";
    num = num % 10;

    int digito5 = num;
    cout << digito5 << endl;

    return 0;
}
