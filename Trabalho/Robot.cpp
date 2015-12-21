#include "Robot.h"

int Robot::id_robot = 0;

Robot::Robot():Tripulacao(){
	setNome("CAP");
	id_robot++;
	setId(id_robot);
	setVida(100);
	setDano(100);
	fazOrdens();
	fazFim();


}

string Robot::mostraRobot(){
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

