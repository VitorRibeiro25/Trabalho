#include "Robot.h"


Robot::Robot(int x, int y, Sala *s):Unidades(x,y,s){
	setNome("CAP");
	setVida(8);
	setDano(100);
	setAccoes();

}

string Robot::mostraUnidade(){
	ostringstream os;

	os << "Robot com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;

	return os.str();
}


void Robot::setAccoes(){
	Combatente *novo = new Combatente(3, this);
	this->insereAccao(novo);
}



