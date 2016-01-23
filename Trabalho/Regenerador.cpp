#include "Regenerador.h"

Regenerador::Regenerador(int val, Unidades *u) :Accao(u){
	this->valor = val;
	fazAccao(valor);
}

Regenerador::~Regenerador(){

}

void Regenerador::fazAccao(int value){
	if (getUni()->getDano() < 100){
		getUni()->setVida(getUni()->getVida() + value);
	}
}