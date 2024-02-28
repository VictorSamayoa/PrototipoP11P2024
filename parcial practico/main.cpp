/*Victor josue samayoa ortiz
Carnet: 9959-23-3424


*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define PUNTOS 50
#define COLUMNAS 4
#define EQUIPOS 5


void imprimirmatriz(float matriz[EQUIPOS][COLUMNAS+1]);
// El struct nos permitira nombrar la matiz
struct L1{
string nombre;
// aqui estamos nombrando la columnas de la matriz
int a2010;
int a2011;
int a2012;
int a2014;
int Puntos;
};


struct L2{
string nombre;
int a2010;
int a2011;
int a2012;
int a2014;
int Puntos;
};


struct L3{
string nombre;
int a2010;
int a2011;
int a2012;
int a2014;
int Puntos;
};

int main()
{
    float matriz[EQUIPOS][COLUMNAS+1];
    imprimirMatriz(matriz);
    return 0;
}
//vamos a utilizar esta funcion vista en clase para ir haciendo busqueda de aleatoreos
int busquedaAleatorios(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void imprimirMatriz(float matriz[CANDIDATOS][COLUMNAS+1]){
bool repetir=true;
char opcion;
L1 l1[EQUIPOS];
L2 l2[EQUIPOS];
L3 l3[EQUIPOS];
//se utilizara un ciclo while
do{
  for(int i=0;i<EQUIPOS;i++){
    cout<<"Equipo numero "<< i+1<<" de la liga nacional  "<<endl;

   cout<<"Nombre: ";
    cin>>l1[i].nombre;
    system("cls");


}
