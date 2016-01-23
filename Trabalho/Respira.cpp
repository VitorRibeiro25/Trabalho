#include "Respira.h"

Respira::Respira(int val, Unidades *u):Accao(u){
	this->valor = val;
	fazAccao(valor);
}

Respira::Respira(){
	if (getUni()->getPonteiroSala()->getOxigenio() > 0){
		getUni()->getPonteiroSala()->setOxigenio(getUni()->getPonteiroSala()->getOxigenio() - 1);
	}
}

Respira::~Respira(){

}

void Respira::fazAccao(int value){
	if (getUni()->getPonteiroSala()->getOxigenio() > 0){
		getUni()->getPonteiroSala()->setOxigenio(getUni()->getPonteiroSala()->getOxigenio() - value);
	}
	else cout << "Sala com vida inferior a zero!" << endl;

}