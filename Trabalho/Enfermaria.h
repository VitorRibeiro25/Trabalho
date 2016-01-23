#ifndef ENFERMARIA_H
#define ENFERMARIA_H
#include "utils.h"
#include "Salas.h"

class Enfermaria : public Sala {
public:
	Enfermaria();
	string mostra();
};

#endif