#include "Beliche.h"

Beliche::Beliche():Sala(){
	setNome("BEL");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string Beliche::mostra(){
	ostringstream os;

	os << "Beliche com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}