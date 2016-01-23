#ifndef XENO_H
#define XENO_H
#include "utils.h"
#include "Accoes.h"

class Xenomorfo : public Accao{
	int valor;
public:
	Xenomorfo(int val, Unidades *u);
	~Xenomorfo();
	void fazAccao(int value);
};
#endif