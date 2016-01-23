#ifndef PROPULSOR_H
#define PROPULSOR_H
#include "utils.h"
#include "Salas.h"

class Propulsor : public Sala {
	int propulsao;
public:
	Propulsor();
	string mostra();
};


#endif