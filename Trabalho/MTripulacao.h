#ifndef MTRIPULACAO_H
#define MTRIPULACAO_H
#include "utils.h"
#include "Unidades.h"


class Mtripulacao : public Unidades{
	static int id_mtrip;
public:
	Mtripulacao(int x, int y);
	string mostraUnidade();
	void fazInicio();
	void fazOrdens();
	void fazFim();
};


#endif