#include <iostream>
#include "funciones.h"
using namespace std;





void estadisticas(int *t, int *t2, char n[], char n2[], int *b, int *PuntajeMaximo)
{


    system("cls");
    char NombreMaximo[20]= {};

    if(*t > *PuntajeMaximo)
    {
        *PuntajeMaximo = *t;
       // NombreMaximo = n;
    }

    if(*t2 > *PuntajeMaximo)
    {
        *PuntajeMaximo = *t2;
    }

    cout << "El puntaje maximo es de: " << *PuntajeMaximo << endl;

    system("pause");
}
