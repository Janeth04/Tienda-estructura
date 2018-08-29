#include <iostream>
#include <conio.h>
using namespace std;
int canti=0;
int clavec;
struct cliente{
char nombreautor[30];
int telefono;
char localidad;
};

struct libro{
int clave;
char nombre[20];
float precio;
char piezas; 
 struct cliente clie;
};//l1,l2;
int main()
{
struct libro l1[5];//l2;
for (int i=0; i<5;i++)
{
cout<<"Clave: ";
cin>>l1[i].clave;
cout<<"Nombre del libro:";
fflush (stdin);
cin.getline(l1[i].nombre,20,'\n');
cout<<"Precio: ";
cin>>l1[i].precio;
cout<<"Piezas existentes: ";
cin>>l1[i].piezas;
cout<<"nombre del autor: ";
fflush (stdin);
cin.getline(l1[i].clie.nombreautor,20,'\n');
cin.getline(l1[i].clie.nombreautor,20,'\n');
}
cout<<"LISTA DE LIBROS ALMACENADOS: "<<endl;
//mostrar lo guardado
for(int i=0;i<5;i++)
{
cout<<endl<<"Clave guadada: "<<l1[i].clave;
cout<<endl<<"Nombre guardado: "<<l1[i].nombre;
cout<<endl<<"Precio guardado: "<<l1[i].precio;
cout<<endl<<"Piezas guardadadas: "<<l1[i].piezas;
cout<<endl<<"Nombre del autor guardado: "<<l1[i].clie.nombreautor;
getch();
}
return 0;
}
