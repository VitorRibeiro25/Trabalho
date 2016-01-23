#include "Raio.h"

Raio::Raio() :Sala(){
	setNome("RAIO");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string Raio::mostra(){
	ostringstream os;

	os << "Raio Laser com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}