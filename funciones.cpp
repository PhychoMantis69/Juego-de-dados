#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "funciones.h"
#include "rlutil.h"




using namespace std;
void tirada(int dados[],int  aux, char manual)
{
    int i = 0;

            if(manual == 's')
    {

        for (i=0; i<aux; i++)
        {
            cout << "Ingrese el dado " << i+1 << endl;

            cin >> dados[i];

            cout << "|" << dados[i] << "|" << endl;

        }


    }

    else
    {

        for (i = 0; i < aux; i++)
        {

            dados[i] = ((rand() % 6) + 1);

            cout << "|" << dados[i] << "|" << endl;

        }

    }

}




int acumular_puntos(int dados[], int c, int ronda, int aux)
{
    int j;

    for (j = 0; j < aux; j++)
    {

            ronda += dados[j];

    }
    return ronda;
}


int bloqueador(int dados[], int c, int blo1, int blo2, int aux2, int aux)
{
    int i;
    for (i = 0; i < aux; i++)
    {
        if (dados[i] == blo1 || dados[i] == blo2)
        {
            cout << "El dado bloqueado fue : " << "|" << dados[i] << "|" << endl;
            dados[i] = 0;
            aux2++;
        }
    }
    return aux2;
}
