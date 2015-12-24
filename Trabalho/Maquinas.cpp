#include "Maquinas.h"

Maquinas::Maquinas():Sala(){
	setNome("MAQ");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string Maquinas::mostra(){
	ostringstream os;

	os << "Maquina com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}

