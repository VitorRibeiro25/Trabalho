#include "Blob.h"


Blob::Blob(int x, int y):Unidades(x,y){
	setNome("BLOB");
	setVida(100);
	setDano(100);
	fazInicio();
	fazOrdens();
	fazFim();
}

string Blob::mostraUnidade(){
	ostringstream os;

	os << "Blob com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

	return os.str();
}

void Blob::fazInicio(){
	regenerador(2);	
	flamejante();	
	toxico(0); // rever aqui	
	move(15);
}

void Blob::fazOrdens(){
	operador();
}

void Blob::fazFim(){
	xenomorfo(0);	
	reparador(6);

}

