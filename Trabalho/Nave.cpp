#include "utils.h"
#include "Nave.h"

using namespace std;

Nave::Nave(){
	for (int i = 1; i <= LIN; i++){
		for (int j = 1; j <= COL; j++){
			salas[i][j] = NULL;
		}
	}
}

void Nave::adicionaSala(Sala *s, int x, int y){
	
	if (salas[x][y] != NULL){
		return;
	}
	salas[x][y] = s;
}

void Nave::adcionaUnidade(Unidades *u, int x, int y){
	
	salas[x][y]->addUnidade(u);
}

Nave::~Nave(){
	for (int i = 0; i < LIN; i++){
		for (int j = 0; j < COL; j++){
			delete salas[i][j];
		}
	}
}

Sala *Nave::getSalaXY(int x, int y){
	return salas[x][y];
}

int Nave::getLin(){
	return Lin;
}

int Nave::getCol(){
	return Col;
}

string Nave::mostraNave(){

	ostringstream os;

	for (int i = 1; i < LIN; i++){
		for (int j = 1; j < COL; j++){
			os << salas[i][j]->mostraSala() << endl;
		}
	}

	return os.str();
}

