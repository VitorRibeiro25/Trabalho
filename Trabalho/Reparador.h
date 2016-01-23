#ifndef REPARA_H
#define REPARA_H
#include "utils.h"
#include "Accoes.h"

class Reparador : public Accao{
	int valor;
public:
	Reparador(int val, Unidades *u);
	~Reparador();
	void fazAccao(int value);
};
#endif