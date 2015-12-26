#ifndef MXYZ_H
#define MXYZ_H
#include "utils.h"
#include "Unidades.h"

class Mxyz : public Unidades{
	static int id_mxyz;
public:
	Mxyz(int x, int y);
	string mostraUnidade();

	void fazInicio();
	void fazOrdens();
	void fazFim();
};

#endif