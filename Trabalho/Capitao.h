#ifndef CAPITAO_H
#define CAPITAO_H
#include "utils.h"
#include "Unidades.h"
#include "Respira.h"
#include "Reparador.h"
#include "Combatente.h"
#include "Operador.h"

class Capitao : public Unidades{
public:
	Capitao(int x, int y, Sala *s);
	string mostraUnidade();
	void setAccoes();
};

#endif