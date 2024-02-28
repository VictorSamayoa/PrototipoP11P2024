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


void imprimirMatriz(float matriz[EQUIPOS][COLUMNAS+1]);
// El struct nos permitira nombrar la matiz
struct L_1{
string nombre;
// aqui estamos nombrando la columnas de la matriz
int a2010;
int a2011;
int a2012;
int a2014;
int puntos;
};


struct L_2{
string nombre;
int a2010;
int a2011;
int a2012;
int a2014;
int puntos;
};


struct L_3{
string nombre;
int a2010;
int a2011;
int a2012;
int a2014;
int puntos;
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

void imprimirMatriz(float matriz[EQUIPOS][COLUMNAS+1]){
bool repetir=true;
char opcion;
L_1 l_1[EQUIPOS];
L_2 l_2[EQUIPOS];
L_3 l_3[EQUIPOS];
//se utilizara un ciclo while
do{
//se pedira ingresar los nombres de los equipos de la primera liga
  for(int i=0;i<EQUIPOS;i++){
    cout<<"Equipo numero "<< i+1<<" de la liga nacional  "<<endl;

   cout<<"Nombre: ";
    cin>>l_1[i].nombre;
    system("cls");


l_1[i].a2010=busquedaAleatorios(1,PUNTOS);
l_1[i].a2011=busquedaAleatorios(1,PUNTOS);
l_1[i].a2012=busquedaAleatorios(1,PUNTOS);
l_1[i].a2014=busquedaAleatorios(1,PUNTOS);
l_1[i].puntos = l_1[i].a2010 + l_1[i].a2011 + l_1[i].a2012 + l_1[i].a2014;




}
//se pedira ingresar los nombres de los equipos de la segunda liga

system("cls");
for(int i=0;i<EQUIPOS;i++){
    cout<<"Equipo numero "<< i+1<<" de la liga acenso  "<<endl;

   cout<<"Nombre: ";
    cin>>l_2[i].nombre;
    system("cls");


l_2[i].a2010=busquedaAleatorios(1,PUNTOS);
l_2[i].a2011=busquedaAleatorios(1,PUNTOS);
l_2[i].a2012=busquedaAleatorios(1,PUNTOS);
l_2[i].a2014=busquedaAleatorios(1,PUNTOS);
l_2[i].puntos = l_2[i].a2010 + l_2[i].a2011 + l_2[i].a2012 + l_2[i].a2014;




}
//se pedira ingresar los nombres de los equipos de la tercera liga

system("cls");
for(int i=0;i<EQUIPOS;i++){
    cout<<"Equipo numero "<< i+1<<" de la liga segunda division  "<<endl;

   cout<<"Nombre: ";
    cin>>l_3[i].nombre;
    system("cls");


l_3[i].a2010=busquedaAleatorios(1,PUNTOS);
l_3[i].a2011=busquedaAleatorios(1,PUNTOS);
l_3[i].a2012=busquedaAleatorios(1,PUNTOS);
l_3[i].a2014=busquedaAleatorios(1,PUNTOS);
l_3[i].puntos = l_3[i].a2010 + l_3[i].a2011 + l_3[i].a2012 + l_3[i].a2014;


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

//----------------------------------------------------------------------------//----------------------------------------------------------------------------
for(int i=0;i< EQUIPOS;i++){
//acumulador de puntos
suma=suma+l_1[i].puntos;

//Puntos mayores para la primera liga
//----------------------------------------------------------------------------//----------------------------------------------------------------------------
if(l_1[i].puntos>PM){
PM=l_1[i].puntos;
Equipo_mayor=l_1[i].nombre;
}
//Puntos menores para la primera liga

if (l_1[i].puntos<PMe){
    PMe=l_1[i].puntos;
    Equipo_menor=l_1[i].nombre;
}

}
//promedio puntos
promedio=suma/EQUIPOS;


for (int i=0;i<EQUIPOS;i++){
    suma2=suma2+l_2[i].puntos;


    if(l_2[i].puntos>PM2){
PM2=l_2[i].puntos;
Equipo_mayor2=l_2[i].nombre;
}

if (l_2[i].puntos<PMe2){
    PMe2=l_2[i].puntos;
    Equipo_menor2=l_2[i].nombre;
}
}
promedio2=suma2/EQUIPOS;

for (int i=0;i<EQUIPOS;i++){
    suma3=suma3+l_3[i].puntos;


    if(l_3[i].puntos>PM3){
PM3=l_3[i].puntos;
Equipo_mayor3=l_3[i].nombre;
}

if (l_3[i].puntos<PMe3){
    PMe3=l_3[i].puntos;
    Equipo_menor3=l_3[i].nombre;
}
}
promedio3=suma3/EQUIPOS;

cout<<setw(10)<<"------Liga uno-----"<<endl<<endl;
cout<<setw(9)<<"Nombre /"<<setw(9)<<"2010 /"<<setw(15)<<"2011 / "<< setw(9) << "2012 /" << setw(15) << "2014 /" << setw(15) << "Puntos Totales/" <<  endl<<endl;
  cout<<"------------------------------------------------------------------------------------------"<<endl;
    //for para imprimir los datos
    for(int i=0;i<EQUIPOS;i++){
     cout<<setw(9)<<l_1[i].nombre<<setw(9)<<l_1[i].a2010<<setw(15)<<l_1[i].a2011<< setw(9) << l_1[i].a2012 << setw(15) << l_1[i].a2014<< setw(15) <<l_1[i].puntos <<  endl<<endl;
    }
    cout<<"el equipo con mas votos es "<<Equipo_mayor <<" con "<< PM<<" puntos"<<endl<<endl;
    cout<<"el equipo con menos puntos es "<<Equipo_menor <<" con "<<PMe<<" puntos"<<endl<<endl;
    cout<<"el promedio de puntos en el la liga es "<<promedio<<" puntos"<<endl<<endl;


    cout<<setw(10)<<"------Liga dos-----"<<endl<<endl;
cout<<setw(9)<<"Nombre /"<<setw(9)<<"2010 /"<<setw(15)<<"2011 / "<< setw(9) << "2012 /" << setw(15) << "2014 /" << setw(15) << "Puntos Totales/" <<  endl<<endl;
  cout<<"------------------------------------------------------------------------------------------"<<endl;

    for(int i=0;i<EQUIPOS;i++){
     cout<<setw(9)<<l_2[i].nombre<<setw(9)<<l_2[i].a2010<<setw(15)<<l_2[i].a2011<< setw(9) << l_2[i].a2012 << setw(15) << l_2[i].a2014<< setw(15) <<l_2[i].puntos <<  endl<<endl;
    }
    cout<<"el equipo con mas votos es "<<Equipo_mayor2 <<" con "<< PM2<<" puntos"<<endl<<endl;
    cout<<"el equipo con menos puntos es "<<Equipo_menor2 <<" con "<<PMe2<<" puntos"<<endl<<endl;
    cout<<"el promedio de puntos en el la liga es "<<promedio2<<" puntos"<<endl<<endl;

    cout<<setw(10)<<"------Liga tres-----"<<endl<<endl;
cout<<setw(9)<<"Nombre /"<<setw(9)<<"2010 /"<<setw(15)<<"2011 / "<< setw(9) << "2012 /" << setw(15) << "2014 /" << setw(15) << "Puntos Totales/" <<  endl<<endl;
  cout<<"------------------------------------------------------------------------------------------"<<endl;

    for(int i=0;i<EQUIPOS;i++){
     cout<<setw(9)<<l_3[i].nombre<<setw(9)<<l_3[i].a2010<<setw(15)<<l_3[i].a2011<< setw(9) << l_3[i].a2012 << setw(15) << l_3[i].a2014<< setw(15) <<l_3[i].puntos <<  endl<<endl;
    }
    cout<<"el equipo con mas votos es "<<Equipo_mayor3 <<" con "<< PM3<<" puntos"<<endl<<endl;
    cout<<"el equipo con menos puntos es "<<Equipo_menor3 <<" con "<<PMe3<<" puntos"<<endl<<endl;
    cout<<"el promedio de puntos en el la liga es "<<promedio3<<" puntos"<<endl<<endl;
//se realizara otro calculo mas
     cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        system("cls");
        if (opcion == 'n') {
            repetir = false;
        }
    } while (repetir);
}

