#ifndef ACCOES_H
#define ACCOES_H
#include "utils.h"
#include "Unidades.h"

class Accao{
	Accao &operator=(const Accao &accao){}
	Unidades *u;
public:
	Accao(Unidades *uni);
	Accao();
	~Accao();
	Unidades *getUni();
	virtual string mostra();
};


#endif