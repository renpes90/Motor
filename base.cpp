#include <iostream>
#include <string>
using namespace std;

class Base{
private:
	int vida;
	int dano;
	int energia;
	string nombre;
	string tipo;
	
public:
	//Personaje();
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

void Base::setVida(int vidax){
	this->vida=vidax;
}

void Base::setDano(int danox){
	this->dano=danox;
}

void Base::setEnergia(int energiax){
	this->energia=energiax;
}

void Base::incrementarEnergia(int incrementox){
	energia+=incrementox;
}

void Base::setNombre(string nomx){
	this->nombre=nomx;
}

void Base::setTipo(string tipox){
	this->tipo=tipox;
}

string Base::getNombre(){
	return nombre;
}

string Base::getTipo(){
	return tipo;
}

int Base::getVida(){
	return vida;
}

int Base::getDano(){
	return dano;
}

int Base::getEnergia(){
	return energia;
}
