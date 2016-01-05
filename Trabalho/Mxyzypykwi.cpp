#include "Mxyzypykwi.h"


Mxyz::Mxyz(int x, int y):Unidades(x,y){
	setNome("MXYZ");
	setVida(100);
	setDano(100);
	fazInicio();
	fazOrdens();
	fazFim();
}

string Mxyz::mostraUnidade(){
	ostringstream os;

	os << "MXYZ com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;

	return os.str();
}

void Mxyz::fazInicio(){	
	respira();
	move(30);
}

void Mxyz::fazOrdens(){
	hipnotizador(15);	
	mutaisMutandis(10);
}

void Mxyz::fazFim(){
	xenomorfo(0);
}
