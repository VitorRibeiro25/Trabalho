#include "Escudo.h"

Escudo::Escudo():Sala(){
	setNome("ESCU");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
	setEscudo(100);
}

string Escudo::mostra(){
	ostringstream os;

	os << "Escudo com ID: " << getID() << "Vida: " << getVida() << "Escudo: " << getEscudo() << "Oxigenio: " << getOxigenio() << "Integridade: " << getIntegridade() << endl;

	return os.str();
}
