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

	os << "Capitao com ID " << getId() << "Vida:" << getVida() << endl << "Dano: " << getDano() << endl << "Estou na sala: " << getOndeEstou() << endl;

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

