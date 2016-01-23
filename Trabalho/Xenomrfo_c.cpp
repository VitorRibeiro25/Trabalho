#include "Xenomorfo.h"

Xenomorfo::Xenomorfo(int val, Unidades *u) :Accao(u){
	this->valor = val;
	fazAccao(valor);
}
Xenomorfo::~Xenomorfo(){

}

void Xenomorfo::fazAccao(int value){
	if (getUni()->getPonteiroSala()->checkUnit("PIR") != NULL || (getUni()->getPonteiroSala()->checkUnit("TRI") != NULL || getUni()->getPonteiroSala()->checkUnit("CAP") != NULL || getUni()->getPonteiroSala()->checkUnit("ROB") != NULL || getUni()->getPonteiroSala()->checkUnit("BLOB") != NULL)){
		getUni()->setDano(getUni()->getDano() - value);
	}
}