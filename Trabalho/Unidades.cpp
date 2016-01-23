#include "utils.h"
#include "Unidades.h"
#include <vector>

using namespace std;

int Unidades::id_uni = 0;

Unidades::Unidades(int x, int y, Sala *s){
	setPos(x, y);
	id_uni++;
	id = id_uni;
	this->s = s;
}

Unidades::~Unidades(){

}

string Unidades::getNome(){
	return nome;
}

int Unidades::getId(){
	return id;
}

int Unidades::getLin(){
	return lin;
}

int Unidades::getCol(){
	return col;
}

int Unidades::getVida(){
	return vida;
}

int Unidades::getDano(){
	return dano;
}

Sala *Unidades::getPonteiroSala(){
	return this->s;
}


void Unidades::setNome(string name){
	nome = name;
}

void Unidades::setId(int idi){
	id = idi;
}

void Unidades::setLin(int x){
	lin = x;
}

void Unidades::setCol(int y){
	col = y;
}

void Unidades::setPos(int x, int y){
	lin = x;
	col = y;
}

void Unidades::setVida(int vid){
	vida = vid;
}

void Unidades::setDano(int dan){
	dano = dan;
}


string Unidades::mostraID(){
	ostringstream os;

	os << getId();

	return os.str();
}

string Unidades::mostraUnidade(){
	string v = " ";

	return v;
}

void Unidades::insereAccao(Accao *a){
	accao.push_back(a);
}


void Unidades::fazInicio(){
}

void Unidades::fazOrdens(){

}

void Unidades::fazFim(){

}
