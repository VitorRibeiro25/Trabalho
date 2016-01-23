#include "Combatente.h"

Combatente::Combatente(int val, Unidades *u) :Accao(u){
	this->valor = val;
	fazAccao(valor);
}

Combatente::~Combatente(){

}

void Combatente::fazAccao(int value){
	if (getUni()->getPonteiroSala()->checkUnit("PIR") != NULL || getUni()->getPonteiroSala()->checkUnit("BLOB") != NULL){
		getUni()->setDano(getUni()->getDano() - value);
	}
}