
#include <iostream>
using namespace std;

int main () 
{
    int num = 0;
    cout << "Ingresa un número entero: ";
    cin >> num;

    if (num % 2 == 0)
        {
            cout << "El número es par.";
        }
    else
        {
            cout << "El número es impar.";
        }
}