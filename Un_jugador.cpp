#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "funciones.h"
#include "rlutil.h"


using namespace std;




void Un_jugador (int *t, char n[], char nom[], int tam)
{



    char pa;
    char manual;
    *t = 0;



//MODO 1 SÓLO JUGADOR
    system("cls");
    cout << "-----------------Modo un jugador-----------------" << endl;
    cout << "Ingrese el nombre del jugador, máximo de nombre 20 carácteres " << endl;
    cin.ignore();
    cin.getline(nom, 20);

    system("cls");
    cout << "¡Bienvenido " << nom << "!" << endl;
    cout << "-----------------------------------------------" << endl;
    strcpy(n, nom);


    int x;
    ///No tira los dados maualmente
    cout << "¿Desea tirar los dados manualmente en esta partida? (S si o n No) " << endl;
    cin >> manual;
    cout << endl;

    for (x = 0; x < 3; x++)
    {
        int blo1, blo2;
        srand(time(0));
        cout << "------------------------------------------------" << endl;
        int ronda = 0;
        blo1 = ("%i", (rand() % 6) + 1);
        blo2 = ("%i", (rand() % 6) + 1);

        system("cls");
        cout << "RONDA N° " << x + 1 << endl;
        cout << "Los bloqueadores son " << endl;
        cout << "|" << blo1 << "|" << blo2 << "|" << endl;
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "Ingrese S(si) para tirar dados o ingrese N(no) para no tirar" << endl;
        cin >> pa;
        cout << "-----------------------------------------------------------------------" << endl;
        const int c = 5;
        int aux = 5, aux2 = 0, dados[c];
        while (pa != 'n')
        {
            system("cls");

            cout << "RONDA N° " << x + 1 << endl;
            cout << "Los bloqueadores son " << endl;
            cout << "|" << blo1 << "|" << blo2 << "|" << endl;


            if (aux == 5)
            {


                int puntos = 0;
                //Tirada 5 dados
                tirada(dados, aux, manual);
                //Buscador de bloqueadores
                aux2 = bloqueador(dados, c, blo1, blo2, aux2, aux);

                //Acumulador para la ronda
                ronda = acumular_puntos(dados, c, ronda, aux);

                aux = aux - aux2;


                ///aca le puedo poner una funcion
                cout << "Puntos actuales: " << ronda << endl;

            }
            else
            {
                if (aux == 4)
                {
                    tirada (dados, aux, manual);

                    aux2 = bloqueador(dados, c, blo1, blo2, aux2, aux);
                    ronda = acumular_puntos(dados, c, ronda, aux);
                    aux = aux - aux2;


                    ///aca le puedo poner una funcion
                    cout << "Puntos actuales: " << ronda << endl;

                }
                else
                {
                    if (aux == 3)
                    {
                        tirada (dados, aux, manual);

                        aux2 = bloqueador(dados, c, blo1, blo2, aux2, aux);
                        ronda = acumular_puntos(dados, c, ronda, aux);
                        aux = aux - aux2;


                        ///aca le puedo poner una funcion
                        cout << "Puntos actuales: " << ronda << endl;


                    }
                    else
                    {
                        if (aux == 2)
                        {
                            tirada(dados, aux, manual);
                            aux2 = bloqueador(dados, c, blo1, blo2, aux2, aux);
                            ronda = acumular_puntos(dados, c, ronda, aux);
                            aux = aux - aux2;


                            ///aca le puedo poner una funcion
                            cout << "Puntos actuales: " << ronda << endl;

                        }
                        else
                        {
                            if (aux == 1)
                            {
                                tirada(dados, aux, manual);
                                aux2 = bloqueador(dados, c, blo1, blo2, aux2, aux);
                                ronda = acumular_puntos(dados, c, ronda, aux);
                                aux = aux - aux2;


                                ///aca le puedo poner una funcion
                                cout << "Puntos actuales: " << ronda << endl;

                            }
                            else
                            {
                                if (aux == 0)
                                {
                                    ronda = 0;


                                    ///aca le puedo poner una funcion
                                    cout << "Puntos actuales: " << ronda << endl;
                                }
                            }
                        }
                    }
                }
            }
            if (aux != 0)
            {
                cout << "-----------------------------------------------------------------------" << endl;
                cout << "Ingrese S(si) para tirar dados o ingrese N(no) para no tirar" << endl;
                cin >> pa;
                cout << "-----------------------------------------------------------------------" << endl;
                aux2 = 0;
            }
            else
            {
                ronda = 0;
                pa = 'n';
            }

        }

        cout << "El total de la ronda " << x + 1 << " fue :" << "|" << ronda << "|" << endl;
        *t += ronda;
        system("pause");

    }
    system("cls");
    cout << "......................................................................................................." << endl;
    cout << ".....................................GAME OVER ........................................................" << endl;
    cout << "......................................................................................................." << endl;

    cout << "---------------------------------------------------------" << endl;
    cout << "EL PUNTAJE TOTAL DEL USUARIO  " << nom << " EN LAS 3 RONDAS FUE: " << "|" << *t << "|" << endl;
    cout << "---------------------------------------------------------" << endl;
    system("pause");




}
