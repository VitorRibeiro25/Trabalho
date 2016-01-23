#ifndef OPERADOR_H
#define OPERADOR_H
#include "utils.h"
#include "Accoes.h"

class Operador : public Accao{
public:
	Operador(Unidades *u);
	~Operador();
	bool fazAccao();
};
#endif