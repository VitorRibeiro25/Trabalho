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

bool Nave::salaAdjacenteBaixo(int x, int y){
	if (y - 1 > 0){
		if (getSalaXY(x, y + 1) != NULL){
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

void Nave::escolheEvento(){
	int numAleat = numero_aleat(4);
	
	if (numAleat == 1){
		PosCosmico();
	}
	if (numAleat == 2){
		AtaquePiratas();
	}
	if (numAleat == 3){
		ChuvaMeteoritos();
	}
	if (numAleat == 3){
		AtaqueXenomorfo();
	}
}

void Nave::PosCosmico(){

	int numSalas = numero_aleat3(2);
	bool val;

	while (numSalas != 0){
		int numX = numero_aleat(4);
		int numY = numero_aleat(3);
		if (getSalaXY(numY, numX) != NULL){
			getSalaXY(numY, numX)->setVida(getSalaXY(numY, numX)->getVida() - 10);
			numSalas--;
		}
		numX = 0;
		numY = 0;
	}

}



void Nave::ChuvaMeteoritos(){
	int num1 = numero_aleat4(4);
	int num2 = numero_aleat6(6);
	bool val;

	for (int i = 1; i <= LIN; i++){
		for (int j = 1; j <= COL; j++){
			if (salas[2][4]->checkUnit("TRI") == true || salas[2][4]->checkUnit("CAP") == true || salas[2][4]->checkUnit("ROB") == true){
				val = true;
			}
			else {
				val = false;
			}
		}
	}


	if (val == true){
		while (num1 != 0){
			int numX = numero_aleat(4);
			int numY = numero_aleat(3);
			if (salas[2][3]->getEscudo() >= 10){
				salas[2][3]->setEscudo(salas[2][3]->getEscudo() - 10);
				num1--;
			}
			else {
				int numX = numero_aleat(4);
				int numY = numero_aleat(3);
				if (getSalaXY(numY, numX) != NULL){
					getSalaXY(numY, numX)->setVida(getSalaXY(numY, numX)->getVida() - 10);
					brecha();
					num1--;
				}
				numX = 0;
				numY = 0;
			}
		}
	}
	else {
		while (num2 != 0){
			int numX = numero_aleat(4);
			int numY = numero_aleat(3);
			if (salas[2][3]->getEscudo() >= 10){
				salas[2][3]->setEscudo(salas[2][3]->getEscudo() - 10);
				num2--;
			}
			else {
				int numX = numero_aleat(4);
				int numY = numero_aleat(3);
				if (getSalaXY(numY, numX) != NULL){
					getSalaXY(numY, numX)->setVida(getSalaXY(numY, numX)->getVida() - 10);
					brecha();
					num1--;
				}
				numX = 0;
				numY = 0;
			}
		}
	}
}

void Nave::AtaquePiratas(){

	int DanoEscudo = numero_aleat30(30);
	int numPiratas = numero_aleat3(2);
	bool val = false;
	
	for (int i = 1; i <= LIN; i++){
		for (int j = 1; j <= COL; j++){
			if (salas[i][j] != NULL && i == 2 && j == 3){
				salas[2][3]->perdeVidaEscudo(DanoEscudo);
			}
			if (salas[i][j] != NULL && salas[i][j]->getNome() == "RAIO"){
				if (salas[i][j]->checkUnit("TRI") != NULL){
					val = true;
				}
			}
		}
	}
	if (val == false){
		while (numPiratas != 0){
			int numX = numero_aleat(4);
			int numY = numero_aleat(3);
			if (getSalaXY(numY, numX) != NULL){
				adcionaUnidade(new Inimigo(numY, numX, getSalaXY(numY, numX)), numY, numX);
				numPiratas--;
			}
			numX = 0;
			numY = 0;
		}
	}
}

void Nave::AtaqueXenomorfo(){

	int num = 1;
	
	while (num != 0){

		int numX = numero_aleat(4);
		int numY = numero_aleat(3);
		if (getSalaXY(numY, numX) != NULL){
			adcionaUnidade(new Blob(numY, numX, getSalaXY(numY, numX)), numY, numX);
			num--;
		}
		numX = 0;
		numY = 0;
	}
}

void Nave::adicionaVida(){
	for (int i = 1; i <= LIN; i++){
		for (int j = 1; j <= COL; j++){
			if (salas[i][j] != NULL){
				if (salas[i][j]->getOxigenio() <= 98){
					salas[i][j]->ganhaOxi(2);
				}
				if (salas[i][j]->getOxigenio() == 99){
					salas[i][j]->ganhaOxi(1);
				}
			}
		}
	}
}

void Nave::brecha(){
	for (int i = 1; i <= LIN; i++){
		for (int j = 1; j <= COL; j++){
			if (salas[i][j] != NULL){
				if (salas[i][j]->getVida() < 100)
					salas[i][j]->setOxigenio(0);
			}
		}
	}
}

void Nave::fogo(){
	int numPer = numero_aleat(100);					
	int numPer2 = numero_aleat(20);
	for (int i = 1; i <= LIN; i++){
		for (int j = 1; j <= COL; j++){
			if (salas[i][j] != NULL){
				if (salas[i][j]->getOxigenio() > 0){
					if (numPer >= 50){
						salas[i][j]->perdeVida(10);
						if (numPer2 == 1){
							if (salaAdjacenteBaixo(i, j) == true){
								salas[i][j + 1]->perdeVida(10);
							}
							if (salaAdjacenteCima(i, j) == true){
								salas[i][j - 1]->perdeVida(10);
							}
							if (salaAdjacenteDireita(i, j) == true){
								salas[i + 1][j]->perdeVida(10);
							}
							if (salaAdjacenteEsquerda(i, j) == true){
								salas[i - 1][j]->perdeVida(10);
							}
						}
					}
				}
			}
		}
	}
}

void Nave::fazTudoCar(){
	for (int i = 1; i <= LIN; i++){
		for (int j = 1; j <= COL; j++){
			if (salas[i][j] != NULL){
				// respira a cada turno
				if (salas[i][j]->checkUnit("TRI") == true || salas[i][j]->checkUnit("CAP") == true){
					if (salas[i][j]->getOxigenio() >= 1){
						salas[i][j]->ganhaOxi(-1);
					}
				}
				// flamajante a cada turno e ver se esta fogo na sala
				if (salas[i][j]->checkUnit("BLOB") == true){
					if (salas[i][j]->getOxigenio() >= 5){
						salas[i][j]->ganhaOxi(-5);
					}
				}
				// reparador para cada turno, falta ver se nao esta em combate
				if (salas[i][j]->checkUnit("TRI") == true || salas[i][j]->checkUnit("PIR") == true || salas[i][j]->checkUnit("CAP") == true){
					if (salas[i][j]->getVida() < 100){
						salas[i][j]->perdeVida(-1);
					}
				}

				if (salas[i][j]->getVida() < 100){
					fogo();
					brecha();
				}
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

