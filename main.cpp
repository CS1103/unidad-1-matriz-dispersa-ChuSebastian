#include "Matriz.h"

int main() {
    int opcion;
    int f1, c1, f2, c2;
    Matriz *pMatriz1 = nullptr;
    Matriz *pMatriz2 = nullptr;

    do {
        cout << "Menu:" << endl;
        cout << "1. Sumar 2 matrices" << endl;
        cout << "2. Multiplicar 2 matrices" << endl;
        cout << "3. Multiplicacion Escalar de una matriz" << endl;
        cout << "4. Transposicion de una matriz" << endl;
        cout << "Ingrese la opcion que desea: "; cin >> opcion;
    }while (opcion < 1 || opcion > 4);


    switch (opcion){
        case 1:
            cout << endl;
            cout << "Filas primer matriz: "; cin >> f1;
            cout << "Columnas primer matriz: "; cin >> c1;
            cout << "Filas segunda matriz: "; cin >> f2;
            cout << "Columnas segunda matriz: "; cin >> c2;
            pMatriz1 = new Matriz(f1,c1);
            pMatriz2 = new Matriz(f2,c2);
            pMatriz1 -> Imprimir();
            cout << "\n\n";
            pMatriz2 -> Imprimir();
            break;

        case 2:
            cout << endl;
            cout << "Filas primer matriz: "; cin >> f1;
            cout << "Columnas primer matriz: "; cin >> c1;
            cout << "Filas segunda matriz: "; cin >> f2;
            cout << "Columnas segunda matriz: "; cin >> c2;
            pMatriz1 = new Matriz(f1,c1);
            pMatriz2 = new Matriz(f2,c2);
            pMatriz1 -> Imprimir();
            cout << "\n\n";
            pMatriz2 -> Imprimir();
            break;


        case 3:
            cout << endl;
            cout << "Filas: "; cin >> f1;
            cout <<"Columnas: "; cin >> c1;
            pMatriz1 = new Matriz(f1,c1);
            pMatriz1 -> Imprimir();

            break;

        case 4:
            cout << endl;
            cout << "Filas: "; cin >> f1;
            cout <<"Columnas: "; cin >> c1;
            pMatriz1 = new Matriz(f1,c1);
            pMatriz1-> Imprimir();
            break;
    }

    return 0;
}