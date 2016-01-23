#include "Propulsor_adi.h"

PropulsorAdi::PropulsorAdi():Sala(){
	setNome("PROPA");
	setVida(100);
	setOxigenio(100);
	setIntegridade(100);
}

string PropulsorAdi::mostra(){
	ostringstream os;

	os << "Propulsor Adicional com ID: " << getID() << endl << "Vida: " << getVida() << endl << "Oxigenio: " << getOxigenio() << endl << "Integridade: " << getIntegridade() << endl;

	return os.str();
}