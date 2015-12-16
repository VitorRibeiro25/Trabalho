#include "utils.h"
#include "Salas.h"

using namespace std;

int Sala::id_sal = 0;

Sala::Sala(){

	id_sal++;
	
}

Sala::~Sala(){

}

string Sala::getNome(){
	return nome;
}

int Sala::getVida(){
	return vida;
}

int Sala::getOxigenio(){
	return oxigenio;
}


int Sala::getIntegridade(){
	return integridade;
}

int Sala::getID(){
	return id_sal;
}


void Sala::setNome(string name){
	nome = name;
}

void Sala::setVida(int vid){
	vida = vid;
}

void Sala::setOxigenio(int oxig){
	oxigenio = oxig;
}

void Sala::setIntegridade(int integri){
	integridade = integri;
}


void Sala::setID(int id){
	id_sal = id;
}

string Sala::mostraSala(){
	ostringstream os;

	os << "Nome: " << getNome() << " Vida: " << getVida() << " Oxigenio: " << getOxigenio() << "Integridade: " << getIntegridade() << endl;

	for (int i = 0; unidades.size(); i++){
		os << unidades[i]  << endl;
	}

	return os.str();
}
