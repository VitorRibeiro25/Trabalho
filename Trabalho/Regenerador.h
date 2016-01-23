#ifndef REGENA_H
#define REGENA_H
#include "utils.h"
#include "Accoes.h"

class Regenerador : public Accao{
	int valor;
public:
	Regenerador(int val, Unidades *u);
	~Regenerador();
	void fazAccao(int value);
};
#endif