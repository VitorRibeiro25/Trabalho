#include "utils.h"
#include "Unidades.h"
#include <vector>

using namespace std;

int Unidades::id_uni = 0;

Unidades::Unidades(int x, int y){
	setPos(x, y);
	id_uni++;
	id = id_uni;
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
	return this->ondeEstou;
}

Sala *Unidades::getOxigenio(){
	return this->oxigenio;
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

void Unidades::setOndeEstou(Sala *s){
	ondeEstou = s;
}

void Unidades::setOxigenio(Sala *s){
	oxigenio = s;
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


void Unidades::respira(){
	
	if (getOxigenio() < 0){
		setVida(getVida() -1);
	}
	else {
		setOxigenio(getOxigenio() - 1);
	}


}

void Unidades::flamejante(){
	setOxigenio(getOxigenio() - 5);
}

void Unidades::toxico(int ganhaVida){

}

void Unidades::indeciso(){
	
}

void Unidades::misterioso(){

}

void Unidades::regenerador(int ganhaVida){
	if (getVida() < 100){
		setVida(getVida() + ganhaVida);
	}
	else return;
}

void Unidades::exoesqueleto(int previneDano){
	setDano(getDano() + previneDano);
}

void Unidades::robotico(){

}

void Unidades::reparador(int RepararDano){
	if (getDano() < 100){
		setDano(RepararDano);
	}
	else return;
}

void Unidades::combatente(int provocaDano){

}

void Unidades::xenomorfo(int provocaDano){

}

void Unidades::casulo(int prob){

}

void Unidades::mutaisMutandis(int prob){

}

void Unidades::hipnotizador(int prob){

}

void Unidades::operador(){

}

void Unidades::tripulacao(){

}

void Unidades::inimigo(int danoUnid, int danoSala){

}

void Unidades::move(int prob){

}

void Unidades::armado(int ganhaDano){

}

void Unidades::fazInicio(){
}

void Unidades::fazOrdens(){

}

void Unidades::fazFim(){

}
