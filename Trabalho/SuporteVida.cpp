#include "SuporteVida.h"

SuporteVida::SuporteVida() :Sala(){
	setNome("VID");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string SuporteVida::mostra(){
	ostringstream os;

	os << "Suporte de Vida com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}