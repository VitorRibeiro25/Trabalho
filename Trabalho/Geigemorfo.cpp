#include "Geigermorfo.h"

Geigemorfo::Geigemorfo(int x, int y, Sala *s):Unidades(x,y, s){
	setNome("GEI");
	setVida(4);
	setDano(100);

}

string Geigemorfo::mostraUnidade(){
	ostringstream os;

	os << "Geigemorfo com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;

	return os.str();
}
