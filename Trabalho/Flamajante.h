#ifndef FLAMAJANTE_H
#define FLAMAJANTE_H
#include "utils.h"
#include "Accoes.h"

class Flamajante : public Accao{
	int valor;
public:
	Flamajante(Unidades *u);
	~Flamajante();
	void fazAccao();
};


#endif