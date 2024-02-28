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
//se pedira ingresar los nombres de los equipos de la primera liga
  for(int i=0;i<EQUIPOS;i++){
    cout<<"Equipo numero "<< i+1<<" de la liga nacional  "<<endl;

   cout<<"Nombre: ";
    cin>>l1[i].nombre;
    system("cls");


l1[i].a2010=busquedaAleatorios(1,PUNTOS);
l1[i].a2011=busquedaAleatorios(1,PUNTOS);
l1[i].a2012=busquedaAleatorios(1,PUNTOS);
l1[i].a2014=busquedaAleatorios(1,PUNTOS);
l1[i].puntos = l1[i].a2010 + l1[i].a2011 + l1[i].a2012 + l1[i].a2014;




}
//se pedira ingresar los nombres de los equipos de la segunda liga

system("cls")
for(int i=0;i<EQUIPOS;i++){
    cout<<"Equipo numero "<< i+1<<" de la liga acenso  "<<endl;

   cout<<"Nombre: ";
    cin>>l1[i].nombre;
    system("cls");


l2[i].a2010=busquedaAleatorios(1,PUNTOS);
l2[i].a2011=busquedaAleatorios(1,PUNTOS);
l2[i].a2012=busquedaAleatorios(1,PUNTOS);
l2[i].a2014=busquedaAleatorios(1,PUNTOS);
l2[i].puntos = l2[i].a2010 + l2[i].a2011 + l2[i].a2012 + l2[i].a2014;




}
//se pedira ingresar los nombres de los equipos de la tercera liga

system("cls")
for(int i=0;i<EQUIPOS;i++){
    cout<<"Equipo numero "<< i+1<<" de la liga segunda division  "<<endl;

   cout<<"Nombre: ";
    cin>>l1[i].nombre;
    system("cls");


l3[i].a2010=busquedaAleatorios(1,PUNTOS);
l3[i].a2011=busquedaAleatorios(1,PUNTOS);
l3[i].a2012=busquedaAleatorios(1,PUNTOS);
l3[i].a2014=busquedaAleatorios(1,PUNTOS);
l3[i].puntos = l3[i].a2010 + l3[i].a2011 + l3[i].a2012 + l3[i].a2014;


}
//se empezara a ver puntos mayores y menores para la creacion de ver cual es mayor y cual menorjunto al promedio
system("cls");
int PM=0;
int PM2=0;
int PM3=0;
int PMe=100000000;
int PMe2=10000000;
int PMe3=10000000;
string Equipo_menor,Equipo_menor2, Equipo_menor3;
string Equipo_mayor,Equipo_mayor2, Equipo_mayor3;
float promedio, promedio2, promedio3=0;
int suma,suma2,suma3=0;
