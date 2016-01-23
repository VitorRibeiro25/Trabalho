#include "SCapitao.h"

SCapitao::SCapitao() :Sala(){
	setNome("SCAP");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string SCapitao::mostra(){
	ostringstream os;

	os << "Sala do Capitao com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}