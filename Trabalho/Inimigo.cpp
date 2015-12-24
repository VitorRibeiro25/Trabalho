#include "Inimigo.h"


int Inimigo::id_ini = 0;

Inimigo::Inimigo():Unidades(){

	setNome("PIR");
	id_ini++;
	setId(id_ini);
	setVida(100);
	setDano(100);
	fazInicio();
	fazFim();
}

void Inimigo::mostraUni(){
	ostringstream os;

	os << "Pirata com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;
}

void Inimigo::fazInicio(){
	respira();	
	move(15);
}


void Inimigo::fazFim(){
	inimigo(1, 2);
}
