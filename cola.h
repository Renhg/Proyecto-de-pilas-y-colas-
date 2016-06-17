#include <iostream>
using namespace std;

struct NodoCola{
	char elemento;
	NodoCola* siguiente;
} ;
NodoCola* frente=NULL;
NodoCola* final=NULL;
char letra;

 class Cola{
	public:
		void insertar(char let);
		void mostrar ();
		void imprimir ();
		void contador ();
};

void Cola:: insertar ( char let){
		NodoCola* Nuevo;
		if (frente ==NULL){
		frente=new NodoCola;
		frente->elemento= let;
		final=frente;
	}else{
		Nuevo =new (NodoCola);
		final->siguiente=Nuevo;
		Nuevo->elemento=let;
		final=Nuevo;
	}
	
}
void Cola::mostrar (){
	NodoCola* delet;
		cout <<"cola\t\t"<<frente->elemento<<endl;
		
		delet=frente;
		frente=frente->siguiente;
		delet=NULL;
}
	

void Cola::imprimir (){
	NodoCola* aux =frente;
	while (aux!=NULL){
	cout<< "\t\t"<<aux->elemento <<endl;
	aux=aux->siguiente;
		if (aux == NULL){
			cout << "\n\n fin"<< endl;
		}
	}
	
}

void Cola::contador (){
	NodoCola* aux=frente;
	int x=0;
	while (aux != NULL){
		aux=aux->siguiente;
		x=x+1;
	}
		cout << "Numero de Datos son: \t" << x <<endl;
		cout << "\n\n"<<endl;
}
