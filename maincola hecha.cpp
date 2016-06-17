#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "cola.h"
#include "pila.h"

using namespace std;

int main() {
	int x;
	int y;
	Cola ka;
	Pila ko;
	cout<<"\n\n 1. Colas \n\n";
	cout<<"\n\n 2. Pilas \n\n";
	cin>> y ;
	if (y==1){
		cout << "\n\n ingrese opcion 1 si desea agregar datos a la cola\n\n";
		cout << "\n\n ingrese opcion 2 si desea desencolar datos\n\n";
		cout<< "\n\n ingrese opcion 3 si desea imprimir la cola\n\n";
		cout<< "\n\n ingrese opcion 4 si desea saber cuantos elementros has ingresado\n\n";
		
	
	do{
			cout << "\n opcion 1 , opcion 2 , opcion 3 u opcion 4 \n"<< endl;
		cin>> x ;
		cout << "\n\n"<<endl;
		if  (x==1){
			cout << "\n\n ingresar elemento\n\n"<< endl;
			cin >> letra;
			cout << "\n\n"<<endl;
			ka.insertar(letra);	}else if (x==2 && frente !=NULL){
			ka.mostrar();}else if (x==3 && frente !=NULL){
			ka.imprimir();	}else if (x=4){
			ka.contador();}
			}while (frente!=NULL);}else if (y==2){
		cout << "\n\n ingrese opcion 1 si desea hacer un push \n\n";
		cout << "\n\n ingrese opcion 2 si desea hacer un pop \n\n";
		cout<< "\n\n ingrese opcion 3 si desea ver el top \n\n";
		cout<< "\n\n ingrese opcion 4 si desea saber cuantos elementros has ingresado \n\n";
		
	
	do{
			cout << "\n opcion 1 , opcion 2 , opcion 3 u opcion 4 \n"<< endl;
		cin>> x ;
		cout << "\n\n"<<endl;
		if  (x==1){
			cout << "\n\n ingresar elemento\n\n"<< endl;
			cin >> letr;
			cout << "\n\n"<<endl;
			ko.push(letr);}
			//ka.insertar(letra);	}
			else if (x==2 && cima!=NULL){
				ko.pop();}else if (x==3 && cima != NULL){
			ko.top();	} else if (x=4){
			ko.contador();}
			}while (cima!=NULL);}
			
return 0;
}
