#include "Oficina.h"

Oficina::Oficina():Sala(){
	setNome("OFIC");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string Oficina::mostra(){
	ostringstream os;

	os << "Oficina Rob. com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}