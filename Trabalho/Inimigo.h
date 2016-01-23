#ifndef INIMIGO_H
#define INIMIGO_H
#include "utils.h"
#include "Unidades.h"
#include "Respira.h"
#include "Inimigo_c.h"

class Inimigo : public Unidades{
public:
	Inimigo(int x, int y, Sala *s);
	string mostraUnidade();
	void setAccoes();
};

#endif