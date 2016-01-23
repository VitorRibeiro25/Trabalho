#include "Inimigo_c.h"

InimigoC::InimigoC(int x, int y, Unidades *u) :Accao(u){
	this->val1 = x;
	this->val2 = y;
	fazAccoes(val1, val2);
}

InimigoC::~InimigoC(){

}

void InimigoC::fazAccoes(int value1, int value2){

	if (getUni()->getPonteiroSala()->checkUnit("PIR") == NULL && (getUni()->getPonteiroSala()->checkUnit("TRI") == NULL || getUni()->getPonteiroSala()->checkUnit("CAP") == NULL || getUni()->getPonteiroSala()->checkUnit("ROB") == NULL || getUni()->getPonteiroSala()->checkUnit("BLOB") == NULL)){
		getUni()->getPonteiroSala()->setVida(getUni()->getPonteiroSala()->getVida() - value2);
	}
	else {
		getUni()->setDano(getUni()->getDano() - value1);
	}

}