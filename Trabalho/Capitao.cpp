#include "Capitao.h"

Capitao::Capitao(int x, int y):Unidades(x, y){

	setNome("CAP");
	setVida(100);
	setDano(100);
	fazInicio();	
	fazOrdens();
	fazFim();



}

string Capitao::mostraUnidade(){
	ostringstream os;

	os << "Capitao" << endl << "com ID: " << getId() << endl << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl;

	return os.str();
}

void Capitao::fazInicio(){
	respira();

}

void Capitao::fazOrdens(){
	operador();	
	tripulacao();	
	exoesqueleto(1);
}

void Capitao::fazFim(){
	reparador(1);	
	combatente(2);	
}

