#ifndef CASULO_H
#define CASULO_H
#include "utils.h"
#include "Unidades.h"

class Casulo : public Unidades{
	static int id_cas;
public:
	Casulo(int x, int y);
	string mostraUnidade();

	void fazOrdens();
	void fazFim();

};

#endif