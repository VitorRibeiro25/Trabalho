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

bool Nave::salaAdjacenteEsquerda(int x, int y){

	if (x - 1 > 0){
		if (getSalaXY(x - 1, y) != NULL){
			return true;
		}
	}
	return false;

}

bool Nave::salaAdjacenteDireita(int x, int y){

	if (x + 1 > 0){
		if (getSalaXY(x + 1, y) != NULL){
			return true;
		}
	}
	return false;
}

bool Nave::salaAdjacenteCima(int x, int y){
	if (y - 1 > 0){
		if (getSalaXY(x, y - 1) != NULL){
			return true;
		}
	}
	return false;
}

void Nave::percorreSala(int id, int x, int y){
	for (int i = 0; i < LIN; i++){
		for (int j = 0; j < COL; j++){
			if (salas[i][j]->checkUnitID(id) == true){
				//salas[x][y]->addUnidade
			}
		}
	}
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

void Nave::executaInicio(){
	for (int i = 0; i < LIN; i++){
		for (int j = 0; j < COL; j++){
			salas[i][j]->inicioTurno();
		}
	}
}

void Nave::executaOrdens(){
	for (int i = 0; i < LIN; i++){
		for (int j = 0; j < COL; j++){
			salas[i][j]->faseOrdens();
		}
	}
}

void Nave::executaFim(){
	for (int i = 0; i < LIN; i++){
		for (int j = 0; j < COL; j++){
			salas[i][j]->fimTurno();
		}
	}
}

bool Nave::checkUnidadeXY(string name, int x, int y){
	
	return salas[x][y]->checkUnit(name);

}

bool Nave::checkUnidadeXYID(int id, int x, int y){

	return salas[x][y]->checkUnitID(id);

}

void Nave::PosCosmico(int tur){

	int numAleatLin = numero_aleat(3);
	int numAleatCol = numero_aleat(4);
	int numAleatLin2 = numero_aleat(3);
	int numAleatCol2 = numero_aleat(4);
	int numAleatLin3 = numero_aleat(3);
	int numAleatCol3 = numero_aleat(4);

	for (int i = 1; i <= LIN; i++){
		for (int j = 1; j <= COL; j++){

			if (salas[numAleatLin][numAleatCol] != NULL){
				if (salas[numAleatLin][numAleatCol]->getVida() > 0)
				salas[numAleatLin][numAleatCol]->perdeVida(10);
			}

			if (salas[numAleatLin2][numAleatCol2] != NULL){
				salas[numAleatLin2][numAleatCol2]->perdeVida(10);
			}
			if (salas[numAleatLin3][numAleatCol3] != NULL){
				salas[numAleatLin3][numAleatCol3]->perdeVida(10);
			}
		}
	}
}

void Nave::moveUni(int id, int x, int y){
	Unidades *t = NULL;
	for (int i = 1; i <= LIN; i++){
		for (int j = 1; j <= COL; j++){
			Sala *s = salas[i][j];
			if (s != NULL){
				if (s->checkUnitID(id) == true){
					t = salas[i][j]->getUniID(id);
					salas[i][j]->removeID(id);
				}
			}
		}
	}

	if (t != NULL){
		adcionaUnidade(t, x, y);
	}
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

