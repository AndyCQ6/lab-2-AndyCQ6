#include <iostream>
using namespace std;

int main ()
{
	int a = 0;
    int b = 0;
    int c = 0;
	int val_min = 0;
	int val_max = 0;

	cout << "Ingresa el primer número: ";
	cin >> a;
	cout << "Ingresa el segundo número: ";
    cin >> b;
	cout << "Ingresa el tercer número: ";
    cin >> c;

	int suma = a + b + c;
	float promedio = (float)(a + b + c)/3;
	int producto = a * b * c;

	cout << "La suma de los números es " << suma << "." << endl;
	cout << "El promedio de los números es " << promedio << "." << endl;
	cout << "El producto de los números es " << producto << "." << endl;
	
		if (a >= b && a >= c) 
		{ 
			val_max = a;
}
else if (b >= a && b >= c) 
{
	val_max = b;
}
else if (c >= a && c >= b) 
{
	val_max = c;
}

cout << "El valor máximo es " << val_max << "." << endl;

if (a <= b && a <= c) 
		{ 
			val_min = a;
}
else if (b <= a && b <= c) 
{
	val_min = b;
}
else if (c <= a && c <= b) 
{
	val_min = c;
}
cout << "El valor mínimo es " << val_min << "." << endl;

return 0;

}
