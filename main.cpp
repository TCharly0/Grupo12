/*#include <iostream>
    using namespace std;
int main() {
    int precio;
    int descuento;
    int precioFinal;

    cout << "Ingresa el precio del articulo: ";
    cin >> precio;

    cout << "Ingresa el porcentaje de descuento: ";
    cin >> descuento;

    if (descuento >= 0 && descuento <= 100) {
        precioFinal = precio - (precio * descuento / 100);
        cout << "El precio despues del descuento es: " << precioFinal << std::endl;
    } else {
        cout << "El porcentaje de descuento ingresado no es valido. Debe estar entre 0 y 100." << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    using namespace std;
    int numero, i = 0;

    cout << "Ingresa un numero: ";
    cin >> numero;

    while (i <= numero) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}
*/
#include <iostream>

int main() {
    using namespace std;
    int n, suma = 0;

    cout << "Ingrese la cantidad de variables: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += i;
        cout << suma << endl;
    }

    return 0;
}

