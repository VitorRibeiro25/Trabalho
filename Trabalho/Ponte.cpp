#include "Ponte.h"

Ponte::Ponte():Sala(){
	setNome("PONT");
	setVida(90);
	setOxigenio(100);
	setIntegridade(100);
}

string Ponte::mostra(){
	ostringstream os;

	os << "Ponte com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}