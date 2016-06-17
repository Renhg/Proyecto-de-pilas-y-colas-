#include <iostream>
using namespace std;

struct NodoPila{

	char elemento;
	NodoPila* siguiente;
} ;

NodoPila* suelo=NULL;
NodoPila* cima=NULL;
char letr;
 class Pila {
 	public:
 		void push(char let);
 		void pop();
 		void top();
 		void contador();
 };
 void Pila::push(char let){
 	suelo= new (NodoPila);
 	suelo->elemento=let;
 	suelo->siguiente=cima;
 	cima=suelo;
}
 void Pila::pop(){
 	NodoPila* delet;
 	cout<<"pila\t\t"<< cima->elemento<<endl;
 	delet=cima;
 	cima=cima->siguiente;
 	delet=NULL;
 }
 void Pila::top(){
 	NodoPila* lol=cima;
 	if (cima !=NULL){
 	cout<<"pila\t\t"<<lol->elemento<<endl;
 }else{
 	cout<<"no hay ningun dato"<< endl;
 }
 }
 void Pila::contador(){
 
	NodoPila* aux=cima;
	int x=0;
	while (aux != NULL){
		aux=aux->siguiente;
		x=x+1;
	}
		cout << "Numero de Datos son: \t" << x <<endl;
		cout << "\n\n"<<endl;
}

