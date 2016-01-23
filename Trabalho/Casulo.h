#ifndef CASULO_H
#define CASULO_H
#include "utils.h"
#include "Unidades.h"

class Casulo : public Unidades{
public:
	Casulo(int x, int y, Sala *s);
	string mostraUnidade();

};

#endif