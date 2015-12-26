#include "MTripulacao.h"

int Mtripulacao::id_mtrip = 0;

Mtripulacao::Mtripulacao(int x, int y):Unidades(x,y){
	setNome("TRI");
	id_mtrip++;
	setId(id_mtrip);
	setVida(100);
	setDano(100);
	fazInicio();	
	fazOrdens();
	fazFim();
}

string Mtripulacao::mostraUnidade(){
	ostringstream os;

	os << "Tripulante com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

	return os.str();
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

