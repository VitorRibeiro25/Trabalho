#include "Operador.h"

Operador::Operador(Unidades *u) :Accao(u){
	fazAccao();
}

Operador::~Operador(){

}

bool Operador::fazAccao(){

	if (getUni()->getPonteiroSala()->getVida() == 100 && (getUni()->getPonteiroSala()->checkUnit("PIR") == NULL || getUni()->getPonteiroSala()->checkUnit("BLOB") == NULL)){
		return true;
	}
	return false;
}