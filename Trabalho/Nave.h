#ifndef NAVE_H
#define NAVE_H
#include "utils.h"
#include "Salas.h"
#define LIN 3
#define COL 4

using namespace std;

class Nave{
	Sala *salas[LIN][COL];
public:
	Nave();

	~Nave();
	void adicionaSala(string name);

	int getId();

	void setId(int i);

	string mostraNave();
	

};

#endif
