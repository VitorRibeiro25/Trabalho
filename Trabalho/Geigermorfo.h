#ifndef GEIGEMORFO_H
#define GEIFEMORFO_H
#include "utils.h"
#include "Xenomorfo.h"

class Geigemorfo : public Xenomorfo{
	static int id_gei;
public:
	Geigemorfo();
	virtual string mostraGei();
};

#endif