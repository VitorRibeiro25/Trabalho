#include "Capitao.h"

Capitao::Capitao(int x, int y, Sala *s):Unidades(x, y,s){

	setNome("CAP");
	setVida(6);
	setDano(100);
	setAccoes();
}

string Capitao::mostraUnidade(){
	ostringstream os;

	os << "Capitao" << endl << "com ID: " << getId() << endl << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;

	return os.str();
}

void Capitao::setAccoes(){
	Respira *novo = new Respira(1, this);
	Reparador *novo2 = new Reparador(1, this);
	Combatente *novo3 = new Combatente(2, this);
	Operador *novo4 = new Operador(this);
	this->insereAccao(novo);
	this->insereAccao(novo2);
	this->insereAccao(novo3);
	this->insereAccao(novo4);
}



