#ifndef MXYZ_H
#define MXYZ_H
#include "utils.h"
#include "Xenomorfo.h"

class Mxyz : public Xenomorfo{
	static int id_mxyz;
public:
	Mxyz();
	virtual string mostraMxyz();
};

#endif