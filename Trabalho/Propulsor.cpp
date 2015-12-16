#include "Propulsor.h"

Propulsor::Propulsor() :Sala(){
	setNome("PRO");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string Propulsor::mostraPropulsor(){
	ostringstream os;

	os << "Propulsor com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}