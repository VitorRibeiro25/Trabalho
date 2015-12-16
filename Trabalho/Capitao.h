#ifndef CAPITAO_H
#define CAPITAO_H
#include "utils.h"
#include "Tripulacao.h"

class Capitao : public Tripulacao{
	static int id_cap;
public:
	Capitao();
	virtual string mostraCapitao();
};

#endif