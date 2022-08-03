#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "funciones.h"
#include "rlutil.h"



using namespace std;
using namespace rlutil;

int main()
{


    setColor(2);
    setlocale(LC_ALL, "spanish");
    const int tam=20;
    char pa, nom2[tam];
    char n2[tam];
    char nom[tam];
    char n[tam];
    int selec;



            //Muestra el menu

        selec=menu();

    int t = 0;
    int t2 = 0;


    while (selec != 0) {



        switch (selec) {
        case 1:

            //MODO 1 SÓLO JUGADOR

        Un_jugador(&t, n, nom, tam);




    break;

        case 2:
            //MODO 2 JUGADORES

        Dos_jugadores(n, n2, &t, &t2, tam, nom, nom2);

            break;
        case 3:

        estadisticas(&t, &t2, n, n2);


            break;
        case 4:

            //Muestra los creditos

            mostrar_creditos();


            break;

        }

       selec=menu();
    }

    return 0;
}
