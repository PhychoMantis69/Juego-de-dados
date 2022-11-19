#include <iostream>
#include "funciones.h"
using namespace std;





void estadisticas(int *t, int *t2, char n[], char n2[], int *b, int *PuntajeMaximo)
{

    system("cls");
    cout << "----------------------Puntajes----------------------" << endl << endl;
    char NombreMaximo[20]= {};

    //todo: cuando vuelvo a mostrar estadisticas desaparece el nombre
    //del jugador con el puntaje maximo
    if(*t > *PuntajeMaximo)
    {
        *PuntajeMaximo = *t;

        for(int x = 0; x < 20; x++)
        {
            NombreMaximo[x] = n[x];
        }
    }
    //alo
    if(*t2 > *PuntajeMaximo)
    {
        *PuntajeMaximo = *t2;
        for(int x = 0; x < 20; x++)
        {
            NombreMaximo[x] = n2[x];
        }
    }

    if(*PuntajeMaximo == 0)
    {
        cout << "Aun no hay puntajes para mostrar" << endl << endl;
    }

    else
    {
        cout << "El puntaje maximo es de: " << *PuntajeMaximo <<
             " por el jugador " << NombreMaximo << endl << endl;

    }

    system("pause");
}
