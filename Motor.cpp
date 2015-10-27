#include "personaje.cpp"
#include <iostream>
#include <string>

using namespace std;

class motorx{
private:
	
public:
	int motor;
	Personaje per[10];
	motorx();
	void alta();
	void imprimir();
	void menu();
};

motorx::motorx(){
	cout<<"Hola mundo"<<endl;
	motor=0;
	menu();
}

void motorx::alta(){
	if(motor < 10){
		int vida, dano;
		string nom,tipo;
		cout<<"Nombre:"<<endl;
		cin>>nom;
		cout<<"Tipo:"<<endl;
		cin>>tipo;
		cout<<"Vida:"<<endl;
		cin>>vida;
		cout<<"Dano:"<<endl;
		cin>>dano;
		per[motor].setVida(vida);
		per[motor].setDano(dano);
		per[motor].setNombre(nom);
		per[motor].setTipo(tipo);
		motor++;
		
	}else{
		cout<<"Lista llena"<<endl;
	}
}

void motorx::imprimir(){
	int i;
	for(i=0; i<motor; i++){
		cout<<"Nombre: "<<per[i].getNombre()<<endl;
		cout<<"Tipo: "<<per[i].getTipo()<<endl;
		cout<<"Vida: "<<per[i].getVida()<<endl;
		cout<<"Dano: "<<per[i].getDano()<<endl;
	}
}

void motorx::menu(){
	int op;
	cout<<"1. Alta"<<endl;
	//cout<<"2. Buscar"<<endl;
	cout<<"2. Imprimir"<<endl;
	cin>>op;
	switch(op){
		case 1:
			alta();
			menu();
			break;
		case 2:
			imprimir();
			menu();
			break;
		case 3:	
			//exit(0);
		default:
		//cout<<"ola kase"<<endl;
		menu();
	}
	
}

int main(){
	motorx a;
	return 0;
	
}
