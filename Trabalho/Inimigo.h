#ifndef INIMIGO_H
#define INIMIGO_H

#include "utils.h"
#include "Unidades.h"

class Inimigo : public Unidades{
	static int id_ini;
public:
	Inimigo();
	void mostraUni();
	void fazInicio();
	void fazFim();
};

#endif