#ifndef OFICINA_H
#define OFICINA_H
#include "utils.h"
#include "Salas.h"

class Oficina : public Sala {
public:
	Oficina();
	string mostra();
};

#endif