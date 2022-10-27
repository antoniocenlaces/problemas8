/*Problemas 8. Apartado 1 y 2. Resolver ecuación de 2º grado
 * Autor: Antonio José González Almela*/

#include <iostream>
#include <cmath>

using namespace std;

/* 
 * Pre:  a ≠ 0 
 * Post: Si la ecuación ax² + bx + c = 0 tiene soluciones reales, la función devuelve el valor 
 *       booleano «true» y asigna a los parámetros «raiz1» y «raiz2» las soluciones de la 
 *       ecuación. En caso contrario, devuelve el valor booleano «false». 
 */ 
bool resolverEcuacion(double a, double b, double c, 
                      double& raiz1, double& raiz2) {
        double discriminante = (b * b - 4 * a * c);
        if (discriminante < 0) {
            return false;
        } else {
            raiz1 =( - b + sqrt(discriminante) ) / ( 2 * a );
            raiz2 =( - b - sqrt(discriminante) ) / ( 2 * a );
            return true;
        }
    }

int main() {
    cout << "Escriba los coeficientes a, b y c de una ecuación de segundo grado: ";
    double a;
    cin >> a;

    while (a != 0) {
        double b, c;
        double raiz1 = 0;
        double raiz2 = 0;
        bool esReal;
        cin >> b >> c;
        esReal = resolverEcuacion(a, b, c, raiz1, raiz2);
        if ( esReal ) {
            cout << "Las soluciones de la ecuación son " << raiz1 << " y " << raiz2 << endl;
        } else {
            cout << "La ecuación no tiene soluciones reales." << endl;
        }
        cout << "Escriba los coeficientes a, b y c de una ecuación de segundo grado: ";
        cin >> a;
    }
    return 0;
}