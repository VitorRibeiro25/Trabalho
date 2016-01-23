#ifndef RESPIRA_H
#define RESPIRA_H

#include "utils.h"
#include "Accoes.h"

class Respira : public Accao{
	int valor;
public:
	Respira(int val, Unidades *u);
	Respira();
	~Respira();
	void fazAccao(int value);
};

#endif