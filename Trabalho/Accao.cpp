#include "Accoes.h"

Accao::Accao(Unidades *uni){
	this->u = uni;
}

Accao::Accao(){

}

Accao::~Accao(){

}

Unidades *Accao::getUni(){
	return this->u;
}


string Accao::mostra(){
	ostringstream os;

	return os.str();
}