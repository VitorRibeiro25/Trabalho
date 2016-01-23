#ifndef COMBATE_H
#define COMBATE_H
#include "utils.h"
#include "Accoes.h"

class Combatente : public Accao{
	int valor;
public:
	Combatente(int val, Unidades *u);
	~Combatente();
	void fazAccao(int value);
};
#endif