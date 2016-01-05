#include "utils.h"
#include "Salas.h"
#include "Unidades.h"
#include <vector>

using namespace std;

int Sala::id_sal = 0;

Sala::Sala(){
	id_sal++;
	id = id_sal;
}

Sala::~Sala(){

}

void Sala::addUnidade(Unidades *u){
	unidades.push_back(u);
}


bool Sala::checkUnit(string nom){;
	for (int i = 0; i < unidades.size(); i++){
		if (unidades[i]->getNome() == nom){
			return true;
		}
	}
	return false;
}

bool Sala::checkUnitID(int id_uni){
	for (int i = 0; i < unidades.size(); i++){
		if (unidades[i]->getId() == id_uni){
			return true;
		}
	}
	return false;
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
	return id;
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


void Sala::setID(int idi){
	id = idi;
}

void Sala::perdeVida(int vid){
	
	vida = vida - vid;
	
	setVida(vida);
}
string Sala::mostraNome(){
	ostringstream os;

	os << getNome();

	return os.str();

}

Unidades *Sala::getUniID(int id){
	for (int i = 0; i < unidades.size(); i++){
		if (unidades[i]->getId() == id){
			return unidades[i];
		}
	}
	return NULL;
}

void Sala::removeID(int id){

	for (int i = 0; i < unidades.size(); i++){
		if (unidades[i]->getId() == id){
			unidades.erase(unidades.begin() +i);
		}
	}
}

string Sala::mostraUnidade(int id_uni){
	ostringstream os;
	for (int i = 0; i < unidades.size(); i++){
		if (unidades[i]->getId() == id_uni){
			os << unidades[i]->mostraUnidade();
		}
	}
	return os.str();
}

string Sala::mostraUniID(){
	string os = "";
	for (int i = 0; i < unidades.size(); i++){
		os = unidades[i]->mostraID() + " ";
	}
	return os;

}
string Sala::mostraSala(){
	ostringstream os;

	os << "Nome: " << getNome() << endl << " Vida: " << getVida() << " Oxigenio: " << getOxigenio() << " Integridade: " << getIntegridade();
	

	return os.str();
}



string Sala::mostra(){
	string xpto = "XXXXX";

	return xpto;
}


void Sala::inicioTurno(){

	for (auto p = unidades.begin(); p != unidades.end(); p++){
		(*p)->fazInicio();
	}
}

void Sala::faseOrdens(){
	for (auto p = unidades.begin(); p != unidades.end(); p++){
		(*p)->fazOrdens();
	}
}

void Sala::fimTurno(){
	for (auto p = unidades.begin(); p != unidades.end(); p++){
		(*p)->fazFim();
	}
}
