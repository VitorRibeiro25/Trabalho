#include "Capitao.h"

int Capitao::id_cap = 0;


Capitao::Capitao():Tripulacao(){

	setNome("CAP");
	id_cap++;
	setId(id_cap);
	setVida(100);
	setDano(100);
	respira();
	exoesqueleto(1);
	reparador(1);
	combatente(2);
	operador();
	tripulacao();
}

string Capitao::mostraCapitao(){
	ostringstream os;

	os << "Capitao com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

	return os.str();
}

