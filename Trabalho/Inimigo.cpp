#include "Inimigo.h"


int Inimigo::id_ini = 0;

Inimigo::Inimigo():Unidades(){

	setNome("PIR");
	id_ini++;
	setId(id_ini);
	setVida(100);
	setDano(100);
	respira();
	inimigo(1, 2);
	move(15);
}

string Inimigo::mostraInimigo(){
	ostringstream os;

	os << "Pirata com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

	return os.str();
}
