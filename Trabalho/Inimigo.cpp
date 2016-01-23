#include "Inimigo.h"

Inimigo::Inimigo(int x, int y, Sala *s):Unidades(x,y,s){

	setNome("PIR");
	setVida(4);
	setDano(100);
	setAccoes();
}

string Inimigo::mostraUnidade(){
	ostringstream os;

	os << "Pirata com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;
	
	return os.str();
}


void Inimigo::setAccoes(){
	Respira *novo = new Respira(1, this);
	InimigoC *novo2 = new InimigoC(1, 2, this);
	this->insereAccao(novo);
	this->insereAccao(novo2);
}

