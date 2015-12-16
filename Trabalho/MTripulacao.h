#ifndef MTRIPULACAO_H
#define MTRIPULACAO_H
#include "utils.h"
#include "Tripulacao.h"


class Mtripulacao : public Tripulacao{
	static int id_mtrip;
public:
	Mtripulacao();
	virtual string mostraMtrip();
};


#endif