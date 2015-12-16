#include "MTripulacao.h"

int Mtripulacao::id_mtrip = 0;

Mtripulacao::Mtripulacao():Tripulacao(){
	setNome("TRI");
	id_mtrip++;
	setId(id_mtrip);
	setVida(100);
	setDano(100);
	respira();
	reparador(1);
	combatente(1);
	operador();
	tripulacao();
}

string Mtripulacao::mostraMtrip(){
	ostringstream os;

	os << "Tripulante com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

	return os.str();
}

