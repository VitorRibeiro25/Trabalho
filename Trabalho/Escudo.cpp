#include "Escudo.h"

Escudo::Escudo():Sala(){
	setNome("ESC");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string Escudo::mostra(){
	ostringstream os;

	os << "Escudo com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}

