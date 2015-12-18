#include "utils.h"
#include "Unidades.h"

using namespace std;

int Unidades::contador = 0;

Unidades::Unidades(string name){

	nome = name;

	id_uni = contador++;

}

Unidades::Unidades(){

}

Unidades::~Unidades(){

}

string Unidades::getNome(){
	return nome;
}

int Unidades::getId(){
	return id_uni;
}

int Unidades::getVida(){
	return vida;
}

int Unidades::getDano(){
	return dano;
}

Sala *Unidades::getOndeEstou(){
	return ondeEstou;
}

void Unidades::setNome(string name){
	nome = name;
}

void Unidades::setId(int id){
	id_uni = id;
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

string Unidades::mostraUnidades(){
	ostringstream os;

	os << "Nome: " << getNome() << " ID: " << getId() << "Vida: " << getVida() << endl;

	return os.str();
}

void Unidades::perdeOxi(int val){

}


void Unidades::respira(){
	/*
	int val = 0;
	if (getOxigenioSala() < 0){
		int val = getVida() - 1;
		setVida(val);
	}
	else {

	}*/
}

void Unidades::flamejante(){

}

void Unidades::toxico(int ganhaVida){

}

void Unidades::indeciso(){

}

void Unidades::misterioso(){

}

void Unidades::regenerador(int ganhaVida){

}

void Unidades::exoesqueleto(int previneDano){

}

void Unidades::robotico(){

}

void Unidades::reparador(int RepararDano){

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
