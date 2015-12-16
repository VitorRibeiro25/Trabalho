#ifndef SUPORTE_H
#define SUPORTE_H
#include "utils.h"
#include "Salas.h"

class SuporteVida : public Sala{
public:
	SuporteVida();
	virtual string mostraSuporte();
};

#endif 