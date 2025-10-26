#include <iostream>
using namespace std;

int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;
    int min = 0;

    cout << "Ingrese 3 números enteros: ";
    cin >> a >> b >> c;

        if (a >= b && a >= c)
            {
                max = a;
            }
        else if (b >= a && b >= c)
            {
                max = b;
            }
        else if (c >= a && c >= b)
            {
                max = c;
            }
        
 // Segunda parte
        
        if (a <= b && a <= c)
            {
                min = a;
            }
        else if (b <= a && b <= c)
            {
                min = b;
            }
        else if (c <= a && c <= b)
            {
                max = c;
            }
        
// Tercera parte

        if (a != max && a != min)
            {
                cout << "El número de en medio es " << a << endl;
            }
        else if (b != max && b != min)
            {
                cout << "El número de en medio es " << b << endl;
            }
        else if (c != max && c != min)
            {
                cout << "El número de en medio es " << b << endl;
            }
        else 
            {
                cout << "El número de en medio es " << a << endl;
            }
            
    return 0;
}