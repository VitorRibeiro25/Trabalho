#ifndef XENOMORFO_H
#define XENOMORFO_H

#include "utils.h"
#include "Unidades.h"

class Xenomorfo : public Unidades{
	static int id_xeno;
public:
	Xenomorfo();
	virtual string mostraXeno();
};


#endif
