#include <iostream>
using namespace std;

void mostrarMayoresAlPromedio(int A[], int n, int promedio) {
    cout << "Valores mayores al promedio (" << promedio << "):" << endl;
    for(int i = 0; i < n; i++) {
        if(A[i] > promedio) {
            cout << A[i] << endl;
        }
    }
}

int main() {
    int n, suma = 0, A[20];
    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    cout << "Ingrese " << n << " elementos:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        suma += A[i];
    }

    int promedio = suma / n;
    cout << "Promedio: " << promedio << endl;

    mostrarMayoresAlPromedio(A, n, promedio);

    return 0;
}