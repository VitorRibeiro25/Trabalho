#include "Enfermaria.h"

Enfermaria::Enfermaria(): Sala(){
	setNome("ENFE");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}


string Enfermaria::mostra(){
	ostringstream os;

	os << "Enfermaria com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}