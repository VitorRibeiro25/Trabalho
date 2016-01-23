#include "Mxyzypykwi.h"

Mxyz::Mxyz(int x, int y, Sala *s):Unidades(x,y,s){
	setNome("MXYZ");
	setVida(8);
	setDano(100);
}

string Mxyz::mostraUnidade(){
	ostringstream os;

	os << "MXYZ com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;

	return os.str();
}
