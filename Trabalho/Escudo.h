#ifndef ESCUDO_H
#define ESCUDO_H
#include "utils.h"
#include "Salas.h"

class Escudo : public Sala{

public:
	Escudo();
	virtual string mostraEscudo();
};

#endif