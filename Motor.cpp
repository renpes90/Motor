#include "base.cpp"
#include <stdlib.h>
#include <iostream>
#include <string>
//linea de prueba
using namespace std;

class motorx{
private:
//omis
public:
	int motor;
	Base per[10];
	Base en[10];
	motorx();
	void altaPer();
	void altaEn();
	void imprimir();
	void menu();
	void restaurarE();
	void pelea();
};

motorx::motorx(){
	//cout<<"Hola mundo"<<endl;
	motor=0;
	menu();
}

void motorx::altaPer(){
	if(motor < 10){
		int vida, dano;
		string nom,tipo;
		cout<<"-------------------------"<<endl;
		cout<<"PERSONAJE"<<endl;
		cout<<"-------------------------"<<endl;
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
		cout<<"-------------------------"<<endl;
	}else{
		cout<<"Lista llena"<<endl;
		cout<<"-------------------------"<<endl;
	}
}

void motorx::altaEn(){
	if(motor < 10){
		int vidaE, danoE;
		string nomE, tipoE;
		cout<<"-------------------------"<<endl;
		cout<<"ENEMIGO"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"Nombre:"<<endl;
		cin>>nomE;
		cout<<"Tipo:"<<endl;
		cin>>tipoE;
		cout<<"Vida:"<<endl;
		cin>>vidaE;
		cout<<"Dano:"<<endl;
		cin>>danoE;
		en[motor].setVida(vidaE);
		en[motor].setDano(danoE);
		en[motor].setNombre(nomE);
		en[motor].setTipo(tipoE);
		en[motor].setEnergia(20);
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
		cout<<"-------------------------"<<endl;
		cout<<"PERSONAJE"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"Nombre: "<<per[i].getNombre()<<endl;
		cout<<"Tipo: "<<per[i].getTipo()<<endl;
		cout<<"Vida: "<<per[i].getVida()<<endl;
		cout<<"Dano: "<<per[i].getDano()<<endl;
		cout<<"Energia: "<<per[i].getEnergia()<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"ENEMIGO"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"Nombre: "<<en[i].getNombre()<<endl;
		cout<<"Tipo: "<<en[i].getTipo()<<endl;
		cout<<"Vida: "<<en[i].getVida()<<endl;
		cout<<"Dano: "<<en[i].getDano()<<endl;
		cout<<"Energia: "<<en[i].getEnergia()<<endl;
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

void motorx::pelea(){
	int i;
	int eli, vida1, vida2, dano1, dano2;
	for(i=0; i<motor; i++){
		
		
		//////////////////////Provisional
		//getVida() especifica??
		vida1 = per[i].getVida();
		dano1 = per[i].getDano();
		dano2 = en[i].getDano();
		vida2 = en[i].getVida();
		
		cout<< vida1 <<endl;
		cout<< vida2 <<endl;
		cout<< dano1 <<endl;
		cout<< dano2 <<endl;
	}
	/////////////////////
	while (vida1>0 && vida2>0){
		eli = rand() % 2 + 1;
		if (eli==2){
			cout<<"Has hecho danio "<<endl;
			vida2=vida2-dano1;
			
		}else{
			cout<<"Has recibido danio "<<endl;
			vida1=vida1-dano2;
		}
	}
	if (vida1<=0){
		cout<<"Has perdido "<<endl;
		per[motor].setVida(vida1);
		
	}else if(vida2<=0){
		cout<<"Has ganado "<<endl;
		en[motor].setVida(vida2);
	}
	
}


void motorx::menu(){
	int op;
	cout<<"1. Dar de Alta Personaje"<<endl;
	cout<<"2. Dar de Alta Enemigo"<<endl;
	//cout<<"2. Buscar"<<endl;
	cout<<"3. Imprimir"<<endl;
	cout<<"4. Aumentar energia"<<endl;
	cout<<"5. Pelea"<<endl;
	cin>>op;
	cout<<"-------------------------"<<endl;
	switch(op){
	case 1:
		altaPer();
		menu();
		break;
	case 2:
		altaEn();
		menu();
		break;
	case 3:
		imprimir();
		menu();
		break;
	case 4:	
		restaurarE();
		menu();
		break;
		
		
	case 5:
		pelea();
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
