#include <iostream>
#include <string>
using namespace std;

class Personaje{
private:
	int vida;
	int dano;
	string nombre;
	string tipo;
	
public:
	//Personaje();
	void setVida(int);
	void setDano(int);
	void setNombre(string);
	void setTipo(string);
	int getVida();
	int getDano();
	string getNombre();
	string getTipo();
	
};

void Personaje::setVida(int vidax){
	this->vida=vidax;
}

void Personaje::setDano(int danox){
	this->dano=danox;
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
