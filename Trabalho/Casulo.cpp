#include "Casulo.h"

int Casulo::id_cas = 0;

Casulo::Casulo():Xenomorfo(){
	setNome("CAS");
	id_cas++;
	setId(id_cas);
	setVida(100);
	setDano(100);
	xenomorfo(0);
	exoesqueleto(1);
}

void Casulo::mostraUni(){
	ostringstream os;

	os << "Casulo com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

}

