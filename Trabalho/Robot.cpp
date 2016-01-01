#include "Robot.h"


Robot::Robot(int x, int y):Unidades(x,y){
	setNome("CAP");
	setVida(100);
	setDano(100);
	fazOrdens();
	fazFim();


}

string Robot::mostraUnidade(){
	ostringstream os;

	os << "Robot com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

	return os.str();
}

void Robot::fazOrdens(){
	tripulacao();
}

void Robot::fazFim(){	
	exoesqueleto(2);
	combatente(3);
}

