#include "utils.h"
#include "Nave.h"

using namespace std;

Nave::Nave(){
	for (int i = 0; i < (int)salas[LIN][COL]; i++){
		for (int j = 0; j < (int)salas[LIN][COL]; j++){
			Sala *s = new Sala();
		}
	}
}

Nave::~Nave(){
	for (int i = 0; i < (int)salas[LIN][COL]; i++){
		for (int j = 0; j < (int)salas[LIN][COL]; j++){
			delete salas[i][j];
		}
	}
}


string Nave::mostraNave(){

	ostringstream os;

	for (int i = 0; i < (int)salas[LIN][COL]; i++){
		for (int j = 0; j < (int)salas[LIN][COL];j++)
		os << salas[i][j]->mostraSala() << endl;
	}

	return os.str();
}

