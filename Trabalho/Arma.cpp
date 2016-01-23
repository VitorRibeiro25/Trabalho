#include "Armas.h"

Arma::Arma() : Sala(){
	setNome("ARM");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string Arma::mostra(){
	ostringstream os;

	os << "Sala de Armas com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}