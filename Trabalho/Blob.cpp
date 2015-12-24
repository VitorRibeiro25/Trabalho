#include "Blob.h"

int Blob::id_blob = 0;

Blob::Blob() :Xenomorfo(){
	setNome("BLOB");
	id_blob++;
	setId(id_blob);
	setVida(100);
	setDano(100);
	xenomorfo(0);
	regenerador(2);
	flamejante();
	toxico(0); // rever aqui
	reparador(6);
	operador();
	move(15);
}

void Blob::mostraUni(){
	ostringstream os;

	os << "Blob com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

}

