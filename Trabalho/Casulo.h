#ifndef CASULO_H
#define CASULO_H
#include "utils.h"
#include "Xenomorfo.h"

class Casulo : public Xenomorfo{
	static int id_cas;
public:
	Casulo();
	virtual string mostraCasulo();

};

#endif