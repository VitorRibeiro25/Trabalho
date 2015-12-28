#include "utils.h"
#include "Salas.h"

using namespace std;

int Sala::id_sal = 0;

Sala::Sala(){

	id_sal++;
	
}

Sala::~Sala(){

}

void Sala::addUnidade(Unidades *u){
	unidades.push_back(u);
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

string Sala::mostraNome(){
	ostringstream os;

	os << getNome();

	return os.str();
}

string Sala::mostraSala(){
	ostringstream os;

	os << "Nome: " << getNome() << endl << " Vida: " << getVida() << endl << " Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}


string Sala::mostra(){
	string xpto = "XXXXX";

	return xpto;
}

/*
void Sala::inicioTurno(){
	for (int i = 0; i < unidades.size(); i++){
		unidades[i]->fazInicio();
	}
}
*/