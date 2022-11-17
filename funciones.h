#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

//Muestra el menu

int menu();


//Tira y muestra los dados
void tirada (int[],int, char);


//Es el modo un jugador
void Un_jugador (int*, char[], char[], int);


//Es el modo dos jugadores
void Dos_jugadores(char[], char[], int*, int*, int, char[], char[]);


void estadisticas(int*, int*, char[], char[], int *b, int *PuntajeMaximo);



//Muestra los creditos
void mostrar_creditos();



int acumular_puntos(int[], int, int, int);


//Bloquea los dados del vector
int bloqueador(int[], int, int, int, int, int);


#endif // FUNCIONES_H_INCLUDED
