#include "Inimigo.h"


Inimigo::Inimigo(int x, int y):Unidades(x,y){

	setNome("PIR");
	setVida(100);
	setDano(100);
	fazInicio();
	fazFim();
}

string Inimigo::mostraUnidade(){
	ostringstream os;

	os << "Pirata com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;
	
	return os.str();
}

void Inimigo::fazInicio(){
	respira();	
	move(15);
}


void Inimigo::fazFim(){
	inimigo(1, 2);
}
