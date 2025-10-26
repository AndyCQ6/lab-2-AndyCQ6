#include <iostream>
using namespace std;

int main ()
{
    int arr[6] = {0, 1, 2, 3, 4, 5};
    cout << "***********\n" << "x  f(x)\n" << "***********\n";
    
        for (int i = 0; i < 6; i++)
            {
                cout << i << " " << ((arr[i] * arr[i] * arr[i]) - (arr[i] * arr[i]) + 5) << endl;
            }
    cout << "***********\n";

    return 0;
}