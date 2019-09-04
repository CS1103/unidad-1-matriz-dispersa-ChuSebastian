//
// Created by chuse on 3/09/2019.
//

#include "Matriz.h"

Matriz::Matriz(int _f, int _c) {
    f = _f;
    c = _c;

}


void Matriz::array() {
    int x = (f * c) / 3;
    srand(time(nullptr));

    int *pF = new int[x];
    for (int i = 0; i < x; i++)
        pF[i] = rand()% f;

    int *pC = new int[x];
    for (int i = 0; i < x; i++)
        pC[i] = rand ()% c;

    int *pV = new int[x];
    for (int i = 0; i < x; i++)
        pV[i] = rand() % 9 + 1;


    int ** pM = new int *[f];
    for (int i = 0; i<f; i++){
        pM[i] = new int [c];
    }

    for (int i = 0; i< f; i++)
        for (int j = 0; j < c; j++)
            pM [i][j] = 0;

    for (int cont = 0; cont < x; cont++){
        pM [pC[cont]][pF[cont]] = pV[cont];
    }

    for (int i = 0; i< f; i++) {
        for (int j = 0; j < c; j++) {
            cout << pM [i][j] << " ";
        }
        cout << endl;
    }


    delete []  pC;
    delete []pF;
    delete [] pV;
    delete [] pM;

}

