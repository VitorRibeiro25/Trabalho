#include "Geigermorfo.h"

Geigemorfo::Geigemorfo(int x, int y):Unidades(x,y){
	setNome("GEI");
	setVida(100);
	setDano(100);
	fazInicio();
	fazOrdens();
	fazFim();

}

string Geigemorfo::mostraUnidade(){
	ostringstream os;

	os << "Geigemorfo com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

	return os.str();
}

void Geigemorfo::fazInicio(){
	move(50);
}

void Geigemorfo::fazOrdens(){
	exoesqueleto(3);
}

void Geigemorfo::fazFim(){
	xenomorfo(3);	
	misterioso();	
	casulo(20);
}
