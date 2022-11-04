#include <iostream>
#include "funciones.h"
using namespace std;





void estadisticas(int *t, int *t2, char n[], char n2[]){


    system("cls");
      if (*t == 0 && *t2 == 0) {
                cout << "-----------------------------------------------------------------" << endl;
                cout << "Todavía no hay estadisticas para mostrar" << endl;
                cout << "-----------------------------------------------------------------" << endl;
            }
            else {
                cout << "-----------------------------------------------------------------" << endl;
                cout << "¡TABLA DE MEJORES PUNTAJES !" << endl;
                cout << "-----------------------------------------------------------------" << endl;
                if (*t > *t2) {
                    cout << "|1° lugar| El jugador " << "|" << n << "|" << " obtuvo " << "|" << *t << "|" << " puntos " << endl;
                    cout << "-----------------------------------------------------------------" << endl;

                }
                else {
                    if (*t < *t2) {
                        cout << "|1° lugar| El jugaor " << "|" << n2 << "|" << " obtuvo " << "|" << *t2 << "|" << " puntos " << endl;
                        cout << "-----------------------------------------------------------------" << endl;

                    }
                    else {
                        if (*t == *t2) {
                            cout << "El jugador " << "|" << n << "|" << " y el jugador " << "|" << n2 << "|" << " obtuvieron el mismo puntaje y fue : " << "|" << t << "|" << endl;
                        }
                    }
                }

            }
            system("pause");
}
