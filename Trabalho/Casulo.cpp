#include "Casulo.h"

int Casulo::id_cas = 0;

Casulo::Casulo(int x, int y):Unidades(x,y){
	setNome("CAS");
	id_cas++;
	setId(id_cas);
	setVida(100);
	setDano(100);
	fazOrdens();
	fazFim();

}

string Casulo::mostraUnidade(){
	ostringstream os;

	os << "Casulo com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

	return os.str();
}

void Casulo::fazOrdens(){
	exoesqueleto(1);
}

void Casulo::fazFim(){
	xenomorfo(0);
}