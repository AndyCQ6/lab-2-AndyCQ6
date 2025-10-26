
#include <iostream>
using namespace std;

int main () 
{
    int n1, n2;
	cout << "Ingresa dos números enteros: ";
	cin >> n1 >> n2;

        if (n2 % n1 == 0)
        { 
	        cout << n1 << " es múltiplo de " << n2;
        }
        else
        {
	    cout << n1 << " NO es múltiplo de " << n2;
        }

    return 0;

}

