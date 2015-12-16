#ifndef TRIPULACAO_H
#define TRIPULACAO_H
#include "utils.h"
#include "Unidades.h"

class Tripulacao : public Unidades{
	static int id_trip;
public:
	Tripulacao();
	virtual string mostraTripulacao();

};

#endif