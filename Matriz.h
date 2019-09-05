//
// Created by chuse on 3/09/2019.
//

#ifndef MATRIZ_DISPERSA_MATRIZ_H
#define MATRIZ_DISPERSA_MATRIZ_H

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class Matriz {
private:
    int f, c, **pM1, **pM2;
public:
    Matriz(int, int);
    void Imprimir();
    void sumar ();
};


#endif //MATRIZ_DISPERSA_MATRIZ_H
