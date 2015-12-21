#ifndef INIMIGO_H
#define INIMIGO_H

#include "utils.h"
#include "Unidades.h"

class Inimigo : public Unidades{
	static int id_ini;
public:
	Inimigo();
	virtual string mostraInimigo();
	virtual void fazInicio();
	virtual void fazFim();
};

#endif