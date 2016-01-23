#include "Casulo.h"

Casulo::Casulo(int x, int y, Sala *s):Unidades(x,y,s){
	setNome("CAS");
	setVida(6);
	setDano(100);

}

string Casulo::mostraUnidade(){
	ostringstream os;

	os << "Casulo com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;

	return os.str();
}
