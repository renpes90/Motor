#include <iostream>
#include <string>
using namespace std;

class Enemigo{
private:
	int vida;
	int dano;
	int energia;
	string nombre;
	string tipo;
	
public:
	//Enemigo();
	void setVida(int);
	void setDano(int);
	void setEnergia(int);
	void incrementarEnergia(int);
	void setNombre(string);
	void setTipo(string);
	int getVida();
	int getDano();
	int getEnergia();
	string getNombre();
	string getTipo();
	
};

void Enemigo::setVida(int vidax){
	this->vida=vidax;
}

void Enemigo::setDano(int danox){
	this->dano=danox;
}

void Enemigo::setEnergia(int energiax){
	this->energia=energiax;
}

void Enemigo::incrementarEnergia(int incrementox){
	energia+=incrementox;
}

void Enemigo::setNombre(string nomx){
	this->nombre=nomx;
}

void Enemigo::setTipo(string tipox){
	this->tipo=tipox;
}

string Enemigo::getNombre(){
	return nombre;
}

string Enemigo::getTipo(){
	return tipo;
}

int Enemigo::getVida(){
	return vida;
}

int Enemigo::getDano(){
	return dano;
}

int Enemigo::getEnergia(){
	return energia;
}
