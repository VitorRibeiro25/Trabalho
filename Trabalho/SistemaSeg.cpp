#include "SistemaSeg.h"

SistemaSeg::SistemaSeg() : Sala(){
	setNome("SSEG");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string SistemaSeg::mostra(){
	ostringstream os;

	os << "Sistema de Seg. com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}