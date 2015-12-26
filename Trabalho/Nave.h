#ifndef NAVE_H
#define NAVE_H
#include "utils.h"
#include "Salas.h"
#include "Unidades.h"
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

	int getId();

	int getLin();
	int getCol();

	void adcionaUnidade(Unidades *u, int x, int y);

	Sala *getSalaXY(int x, int y);

	void setId(int i);

	string mostraNave();

	

};

#endif
