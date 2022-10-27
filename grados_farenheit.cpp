/*Problemas 8. Apartado 3. Conversión de grados Farenheit
 * a grados centígrados.
 * Autor: Antonio José González Almela*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Escriba una temperatura expresada en grados Fahrenheit: ";
    double farenheit;
    cin >> farenheit;

    cout << farenheit << " ºF equivalen a " << fixed << setprecision(2) <<
        ((5 / 9.0) * (farenheit - 32)) << " ºC" << endl;
}