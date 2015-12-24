#include "Geigermorfo.h"

int Geigemorfo::id_gei = 0;

Geigemorfo::Geigemorfo():Xenomorfo(){
	setNome("GEI");
	id_gei++;
	setId(id_gei);
	setVida(100);
	setDano(100);
	xenomorfo(3);
	misterioso();
	move(50);
	casulo(20);
	exoesqueleto(3);
}

void Geigemorfo::mostraUni(){
	ostringstream os;

	os << "Geigemorfo com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

}
