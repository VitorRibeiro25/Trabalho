#include "Capitao.h"

int Capitao::id_cap = 0;


Capitao::Capitao():Tripulacao(){

	setNome("CAP");
	id_cap++;
	setId(id_cap);
	setVida(100);
	setDano(100);
	fazInicio();	
	fazOrdens();
	fazFim();



}

string Capitao::mostraCapitao(){
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

