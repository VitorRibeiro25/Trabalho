#ifndef GEIGEMORFO_H
#define GEIFEMORFO_H
#include "utils.h"
#include "Unidades.h"

class Geigemorfo : public Unidades{
	static int id_gei;
public:
	Geigemorfo(int x, int y);
	string mostraUnidade();

	void fazInicio();
	void fazOrdens();
	void fazFim();
};

#endif