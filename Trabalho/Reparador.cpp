#include "Reparador.h"

Reparador::Reparador(int val, Unidades *u) :Accao(u){
	this->valor = val;
	fazAccao(valor);
}

Reparador::~Reparador(){

}

void Reparador::fazAccao(int value){
	if (getUni()->getPonteiroSala()->getVida() < 100){
		getUni()->getPonteiroSala()->setVida(getUni()->getPonteiroSala()->getVida() + value);
	}
}