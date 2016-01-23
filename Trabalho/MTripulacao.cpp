#include "MTripulacao.h"

Mtripulacao::Mtripulacao(int x, int y, Sala *s):Unidades(x,y, s){
	setNome("TRI");
	setVida(5);
	setDano(100);
	setAccoes();
}

string Mtripulacao::mostraUnidade(){
	Consola c;
	ostringstream os;
	os << "Tripulante com ID: " << getId() << " Vida: " << getVida() <<  " Dano: " << getDano();

	return os.str();
}

void Mtripulacao::setAccoes(){
	Respira *novo = new Respira(1, this);
	Reparador *novo2 = new Reparador(1, this);
	Combatente *novo3 = new Combatente(1, this);
	Operador *novo4 = new Operador(this);
	this->insereAccao(novo);
	this->insereAccao(novo2);
	this->insereAccao(novo3);
	this->insereAccao(novo4);
}
