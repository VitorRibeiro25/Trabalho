#include "AutoReparador.h"

AutoReparador::AutoReparador() :Sala(){
	setNome("AREP");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string AutoReparador::mostra(){
	ostringstream os;

	os << "Auto Reparador com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}