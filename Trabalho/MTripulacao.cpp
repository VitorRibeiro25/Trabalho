#include "MTripulacao.h"

int Mtripulacao::id_mtrip = 0;

Mtripulacao::Mtripulacao():Tripulacao(){
	setNome("TRI");
	id_mtrip++;
	setId(id_mtrip);
	setVida(100);
	setDano(100);
	fazInicio();	
	fazOrdens();
	fazFim();
}

void Mtripulacao::mostraUni(){
	ostringstream os;

	os << "Tripulante com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

}

void Mtripulacao::fazInicio(){
	respira();

}

void Mtripulacao::fazOrdens(){
	operador();
	tripulacao();
}

void Mtripulacao::fazFim(){
	reparador(1);
	combatente(1);	

}

