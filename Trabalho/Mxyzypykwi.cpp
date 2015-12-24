#include "Mxyzypykwi.h"

int Mxyz::id_mxyz = 0;

Mxyz::Mxyz():Xenomorfo(){
	setNome("MXYZ");
	id_mxyz++;
	setId(id_mxyz);
	setVida(100);
	setDano(100);
	xenomorfo(0);
	hipnotizador(15);
	move(30);
	mutaisMutandis(10);
	respira();
}

void Mxyz::mostraUni(){
	ostringstream os;

	os << "MXYZ com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

}

