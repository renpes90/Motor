#include "personaje.cpp"
#include <iostream>
#include <string>
//linea de prueba
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
	void restaurarE();
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
		per[motor].setEnergia(20);
		motor++;
		cout<<"-------------------------"<<endl;
	}else{
		cout<<"Lista llena"<<endl;
		cout<<"-------------------------"<<endl;
	}
}

void motorx::imprimir(){
	int i;
	for(i=0; i<motor; i++){
		cout<<"Nombre: "<<per[i].getNombre()<<endl;
		cout<<"Tipo: "<<per[i].getTipo()<<endl;
		cout<<"Vida: "<<per[i].getVida()<<endl;
		cout<<"Dano: "<<per[i].getDano()<<endl;
		cout<<"Energia: "<<per[i].getEnergia()<<endl;
		cout<<"-------------------------"<<endl;
	}
}

void motorx::restaurarE(){
	int a;
	cout<<"Que personaje restaurara energia?"<<endl;
	cin>>a;
	a-=1;
	
	if (a>>motor){
		cout<<"No existe el personaje"<<endl;
	}else{
		cout<<"Personaje: "<<per[a].getNombre()<<endl;
		cout<<"Energia actual: "<<per[a].getEnergia()<<endl;
		cout<<"Recargando energia..."<<endl;
		per[a].incrementarEnergia(5);
		cout<<"Energia despues de la recargar: "<<per[a].getEnergia()<<endl;
		cout<<"-------------------------"<<endl;
	}
	
}

void motorx::menu(){
	int op;
	cout<<"1. Alta"<<endl;
	//cout<<"2. Buscar"<<endl;
	cout<<"2. Imprimir"<<endl;
	cout<<"3. Aumentar energia"<<endl;
	cin>>op;
	cout<<"-------------------------"<<endl;
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
			restaurarE();
			menu();
			break;
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
