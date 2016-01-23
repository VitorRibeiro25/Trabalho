#include "Blob.h"

Blob::Blob(int x, int y, Sala *s):Unidades(x,y,s){
	setNome("BLOB");
	setVida(8);
	setDano(100);
}


string Blob::mostraUnidade(){
	ostringstream os;

	os << "Blob com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;

	return os.str();
}

void Blob::setAccoes(){
	Xenomorfo *novo = new Xenomorfo(0, this);
	Regenerador *novo2 = new Regenerador(2, this);
	Reparador *novo3 = new Reparador(6, this);
	Operador *novo4 = new Operador(this);
	Flamajante *novo5 = new Flamajante(this);
 	this->insereAccao(novo);
	this->insereAccao(novo2);
	this->insereAccao(novo3);
	this->insereAccao(novo4);
	this->insereAccao(novo5);
}
