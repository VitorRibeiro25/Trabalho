#ifndef NAVE_H
#define NAVE_H
#include "utils.h"
#include "Salas.h"
#include "Unidades.h"
#include "Inimigo.h"
#include "Blob.h"
#define LIN 3
#define COL 4

using namespace std;

class Nave{
	int Lin, Col;
	Sala *salas[LIN][COL];
public:
	Nave();

	~Nave();

	void adicionaSala(Sala *s, int x, int y);

	bool salaAdjacenteEsquerda(int x, int y);
	bool salaAdjacenteBaixo(int x, int y);
	bool salaAdjacenteCima(int x, int y);
	bool salaAdjacenteDireita(int x, int y);

	int getId();

	int getLin();
	int getCol();

	void adcionaUnidade(Unidades *u, int x, int y);
	void percorreSala(int id, int x, int y);

	Sala *getSalaXY(int x, int y);

	bool checkUnidadeXY(string name, int x, int y);
	bool checkUnidadeXYID(int sid, int x, int y);

	void adicionaVida();

	void setId(int i);

	string mostraNave();

	void moveUni(int id, int x, int y);

	// eventos 
	void escolheEvento();
	void executaInicio();
	void executaOrdens();
	void executaFim();
	void PosCosmico();
	void brecha();
	void fogo();
	void ChuvaMeteoritos();
	void AtaquePiratas();
	void AtaqueXenomorfo();

	// carateristicas nos diferentes turnos
	
	void fazTudoCar();

};

#endif
