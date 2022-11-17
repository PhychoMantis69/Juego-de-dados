#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "funciones.h"
#include "rlutil.h"

using namespace std;




void Dos_jugadores(char n[], char n2[], int *t, int*t2, int tam, char nom[], char nom2[])
{


    int x;
    char pa;
    char manual;
    *t = 0;
    *t2 = 0;


    system("cls");
    cout << "-----------------Modo dos jugadores-----------------" << endl;
    cout << "Ingrese nombre del primer jugador, máximo de nombre 20 carácteres " << endl;
    cin.ignore();
    cin.getline(nom, 20);
    cout << "---------------------------------------------" << endl;
    cout << "¡Bienvenido " << nom << "!" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Ingrese nombre del segundo jugador, máximo de nombre 20 carácteres " << endl;
    cin.getline(nom2, 20);
    cout << "---------------------------------------------" << endl;
    cout << "¡Bienvenido " << nom2 << "!" << endl;
    cout << "-----------------------------------------------" << endl;
    strcpy(n, nom);
    strcpy(n2, nom2);

    cout << "¿Desea tirar los dados manualmente en esta partida? (S si o n No) " << endl;
    cin >> manual;
    cout << endl;

    system("cls");
    for (x = 0; x < 3; x++)
    {
        int blo1, blo2, blo3, blo4;
        srand(time(0));
        cout << "------------------------------------------------" << endl;
        cout << "RONDA N° " << x + 1 << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Turno del jugador " << nom << endl;
        cout << "------------------------------------------------" << endl;
        int ronda = 0;
        int ronda2 = 0;
        blo1 = ((rand() % 6) + 1);
        blo2 = ((rand() % 6) + 1);
        cout << "Los bloqueadores son " << endl;
        cout << "|" << blo1 << "|" << blo2 << "|" << endl;
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "Ingrese S(si) para tirar dados o ingrese N(no) para no tirar" << endl;
        cin >> pa;
        cout << "-----------------------------------------------------------------------" << endl;
        const int c = 5;
        int aux = 5, aux2 = 0, dados[c];
        //jugador 1
        while (pa != 'n')
        {
            system("cls");
            cout << "RONDA N° " << x + 1 << endl;
            cout << "Los bloqueadores son " << endl;
            cout << "|" << blo1 << "|" << blo2 << "|" << endl;

            if (aux == 5)
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
                if (aux == 4)
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
                    if (aux == 3)
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
                        if (aux == 2)
                        {
                            tirada(dados, aux, manual);
                            aux2 = bloqueador(dados, c, blo1, blo2, aux2, aux);
                            ronda =acumular_puntos(dados, c, ronda, aux);
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

        system("cls");
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "El total de la ronda " << x + 1 << " del jugador " << nom << " fue :" << "|" << ronda << "|" << endl;
        *t += ronda;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        //segundo jugador

        blo3 = ("%i", (rand() % 6) + 1);
        blo4 = ("%i", (rand() % 6) + 1);
        cout << "Turno del jugador " << nom2 << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Los bloqueadores son " << endl;
        cout << "|" << blo3 << "|" << blo4 << "|" << endl;
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "Ingrese S(si) para tirar dados o ingrese N(no) para no tirar" << endl;
        cin >> pa;
        cout << "-----------------------------------------------------------------------" << endl;

        int aux3 = 5, aux4 = 0, dados2[c];
        while (pa != 'n')
        {
            system("cls");
            cout << "RONDA N° " << x + 1 << endl;
            cout << "Los bloqueadores son " << endl;
            cout << "|" << blo1 << "|" << blo2 << "|" << endl;

            if (aux3 == 5)
            {
                tirada(dados2, aux3, manual);
                aux4 = bloqueador(dados2, c, blo3, blo4, aux4, aux3);
                ronda2 = acumular_puntos(dados2, c, ronda2, aux3);
                aux3 = aux3 - aux4;

                ///aca le puedo poner una funcion
                cout << "Puntos actuales: " << ronda2 << endl;


            }
            else
            {
                if (aux3 == 4)
                {
                    tirada(dados2, aux3, manual);
                    aux4 = bloqueador(dados2, c, blo3, blo4, aux4, aux3);
                    ronda2 = acumular_puntos(dados2, c, ronda2, aux3);
                    aux3 = aux3 - aux4;


                    ///aca le puedo poner una funcion
                    cout << "Puntos actuales: " << ronda2 << endl;


                }
                else
                {
                    if (aux3 == 3)
                    {
                        tirada(dados2, aux3, manual);
                        aux4 = bloqueador(dados2, c, blo3, blo4, aux4, aux3);
                        ronda2 = acumular_puntos(dados2, c, ronda2, aux3);
                        aux3 = aux3 - aux4;

                        ///aca le puedo poner una funcion
                        cout << "Puntos actuales: " << ronda2 << endl;

                    }
                    else
                    {
                        if (aux3 == 2)
                        {
                            tirada(dados2, aux3, manual);
                            aux4 = bloqueador(dados2, c, blo3, blo4, aux4, aux3);
                            ronda2 = acumular_puntos(dados2, c, ronda2, aux3);
                            aux3 = aux3 - aux4;

                            ///aca le puedo poner una funcion
                            cout << "Puntos actuales: " << ronda2 << endl;


                        }
                        else
                        {
                            if (aux3 == 1)
                            {
                                tirada(dados2, c, manual);
                                aux4 = bloqueador(dados2, c, blo3, blo4, aux4, aux3);
                                ronda2 = acumular_puntos(dados2, c, ronda2, aux3);
                                aux3 = aux3 - aux4;


                                ///aca le puedo poner una funcion
                                cout << "Puntos actuales: " << ronda2 << endl;

                            }
                            else
                            {
                                if (aux3 == 0)
                                {
                                    ronda2 = 0;

                                    ///aca le puedo poner una funcion
                                    cout << "Puntos actuales: " << ronda2 << endl;

                                }
                            }
                        }
                    }
                }
            }
            if (aux3 != 0)
            {
                cout << "-----------------------------------------------------------------------" << endl;
                cout << "Ingrese S(si) para tirar dados o ingrese N(no) para no tirar" << endl;
                cin >> pa;
                cout << "-----------------------------------------------------------------------" << endl;
                aux4 = 0;
            }
            else
            {
                ronda2 = 0;
                pa = 'n';
            }

        }

        system("cls");
        cout << "----------------------------------------------------------------------------------------------" << endl;
        cout << "El total de la ronda " << x + 1 << " del jugador " << nom2 << " fue :" << "|" << ronda2 << "|" << endl;
        *t2 += ronda2;
        cout << "----------------------------------------------------------------------------------------------" << endl;


    }
    system("cls");
    cout << "......................................................................................................." << endl;
    cout << ".....................................GAME OVER ........................................................" << endl;
    cout << "......................................................................................................." << endl;


    cout << "---------------------------------------------------------" << endl;
    cout << "El total del jugador " << nom << " en las 3 rondas fue : " << "|" << *t << "|" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "El total del jugador " << nom2 << " en las 3 rondas fue : " << "|" << *t2 << "|" << endl;
    cout << "---------------------------------------------------------" << endl;



    if(*t > *t2)
    {
        cout << "El jugador " << nom << " es el ganador" << endl;
    }

    if(*t2 > *t)
    {
        cout << "El jugador " << nom2 << " es el ganador" << endl;
    }

    if(*t2 == *t)
    {
        cout << "¡Los jugadores han empatado!" << endl << endl << endl;
    }

    system("pause");
    system("cls");




}
