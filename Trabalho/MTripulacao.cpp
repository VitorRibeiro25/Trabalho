#include "MTripulacao.h"

Mtripulacao::Mtripulacao(int x, int y):Unidades(x,y){
	setNome("TRI");
	setVida(100);
	setDano(100);
	fazInicio();	
	fazOrdens();
	fazFim();
}

string Mtripulacao::mostraUnidade(){
	Consola c;
	ostringstream os;
	os << "Tripulante " << endl;
	os << " com ID: " << getId();
	os << " Vida:" << getVida();
	os << " Dano: " << getDano();

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

