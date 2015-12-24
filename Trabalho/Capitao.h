#ifndef CAPITAO_H
#define CAPITAO_H
#include "utils.h"
#include "Tripulacao.h"

class Capitao : public Tripulacao{
	static int id_cap;
public:
	Capitao();
	void mostraUni();
	void fazInicio();
	void fazOrdens();
	void fazFim();
};

#endif