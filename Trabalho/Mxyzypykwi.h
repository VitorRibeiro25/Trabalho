#ifndef MXYZ_H
#define MXYZ_H
#include "utils.h"
#include "Unidades.h"

class Mxyz : public Unidades{
public:
	Mxyz(int x, int y, Sala *s);
	string mostraUnidade();
};

#endif