#ifndef NAVE_H
#define NAVE_H
#include "utils.h"
#include "Salas.h"

using namespace std;

class Nave{
	Sala *salas[3][5];
public:
	Nave();

	~Nave();
	void adicionaSala(string name);

	int getId();

	void setId(int i);

	string mostraNave();
	

};

#endif
