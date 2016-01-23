#include "Flamajante.h"

Flamajante::Flamajante(Unidades *u) :Accao(u){
	fazAccao();
}

Flamajante::~Flamajante(){

}

void Flamajante::fazAccao(){
	if (getUni()->getPonteiroSala()->getOxigenio() >= 5){
		getUni()->getPonteiroSala()->setOxigenio(getUni()->getPonteiroSala()->getOxigenio() - 5);
	}
}