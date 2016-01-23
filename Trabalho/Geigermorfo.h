#ifndef GEIGEMORFO_H
#define GEIFEMORFO_H
#include "utils.h"
#include "Unidades.h"

class Geigemorfo : public Unidades{
public:
	Geigemorfo(int x, int y, Sala *s);
	string mostraUnidade();
};

#endif