#ifndef MTRIPULACAO_H
#define MTRIPULACAO_H
#include "utils.h"
#include "Unidades.h"
#include "Respira.h"
#include "Reparador.h"
#include "Combatente.h"
#include "Operador.h"



class Mtripulacao : public Unidades{
public:
	Mtripulacao(int x, int y, Sala *s);
	string mostraUnidade();
	void setAccoes();
};


#endif