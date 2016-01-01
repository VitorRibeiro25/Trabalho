#ifndef CAPITAO_H
#define CAPITAO_H
#include "utils.h"
#include "Unidades.h"

class Capitao : public Unidades{
public:
	Capitao(int x, int y);
	string mostraUnidade();
	void fazInicio();
	void fazOrdens();
	void fazFim();
};

#endif