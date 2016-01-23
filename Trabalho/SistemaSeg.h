#ifndef SISTEMASEG_H
#define SISTEMASEG_H
#include "utils.h"
#include "Salas.h"

class SistemaSeg : public Sala {
public:
	SistemaSeg();
	string mostra();
};

#endif