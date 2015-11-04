#include <iostream>
#include <string>
using namespace std;

class Personaje{
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

void Personaje::setVida(int vidax){
	this->vida=vidax;
}

void Personaje::setDano(int danox){
	this->dano=danox;
}

void Personaje::setEnergia(int energiax){
	this->energia=energiax;
}

void Personaje::incrementarEnergia(int incrementox){
	energia+=incrementox;
}

void Personaje::setNombre(string nomx){
	this->nombre=nomx;
}

void Personaje::setTipo(string tipox){
	this->tipo=tipox;
}

string Personaje::getNombre(){
	return nombre;
}

string Personaje::getTipo(){
	return tipo;
}

int Personaje::getVida(){
	return vida;
}

int Personaje::getDano(){
	return dano;
}

int Personaje::getEnergia(){
	return energia;
}
