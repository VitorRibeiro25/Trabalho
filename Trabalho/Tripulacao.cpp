#include "Tripulacao.h"

int Tripulacao::id_trip = 0;

Tripulacao::Tripulacao():Unidades(){
	id_trip++;
}

string Tripulacao::mostraTripulacao(){

	ostringstream os;

	return os.str();
}