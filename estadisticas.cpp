#include <iostream>
#include "funciones.h"
using namespace std;





void estadisticas(int *t, int *t2, char n[], char n2[], int *b, int *PuntajeMaximo)
{

    system("cls");
    cout << "----------------------Puntajes----------------------" << endl << endl;
    char NombreMaximo[20]= {};

    if(*t > *PuntajeMaximo)
    {
        *PuntajeMaximo = *t;
        // NombreMaximo = n;
    }
    //alo
    if(*t2 > *PuntajeMaximo)
    {
        *PuntajeMaximo = *t2;
    }

    if(*PuntajeMaximo == 0)
    {
        cout << "Aun no hay puntajes para mostrar" << endl << endl;
    }

    else
    {
        cout << "El puntaje maximo es de: " << *PuntajeMaximo << endl << endl;

    }

    system("pause");
}
