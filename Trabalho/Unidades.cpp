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

Sala *Unidades::getOxigenio(){
	return oxigenio;
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

void Unidades::setOxigenio(Sala *s){
	oxigenio = s;
}

string Unidades::mostraUnidades(){
	ostringstream os;

	os << "Nome: " << getNome() << " ID: " << getId() << "Vida: " << getVida() << endl;

	return os.str();
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
