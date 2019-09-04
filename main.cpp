#include "Matriz.h"

int main() {
    int opcion;
    int fila, columna;
    Matriz *pMatriz = nullptr;

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
            cout << "Filas primer matriz: "; cin >> fila;
            cout << "Columnas primer matriz: "; cin >> columna;
            cout << "Filas segunda matriz: "; cin >> fila;
            cout << "Columnas segunda matriz: "; cin >> columna;
            break;

        case 2:

            cout << endl;
            cout << "Filas primer matriz: "; cin >> fila;
            cout << "Columnas primer matriz: "; cin >> columna;
            cout << "Filas segunda matriz: "; cin >> fila;
            cout << "Columnas segunda matriz: "; cin >> columna;
            break;


        case 3:
            cout << endl;
            cout << "Filas: "; cin >> fila;
            cout <<"Columnas: "; cin >> columna;
            break;

        case 4:
            cout << endl;
            cout << "Filas: "; cin >> fila;
            cout <<"Columnas: "; cin >> columna;
            Matriz p1(fila, columna);
            p1.array();


            break;




    }

    return 0;
}