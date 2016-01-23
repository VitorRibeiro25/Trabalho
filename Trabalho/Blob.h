#ifndef BLOB_H
#define BLOB_H
#include "utils.h"
#include "Unidades.h"
#include "Xenomorfo.h"
#include "Regenerador.h"
#include "Reparador.h"
#include "Operador.h"
#include "Flamajante.h"

class Blob : public Unidades{
public:
	Blob(int x, int y, Sala *s);
	string mostraUnidade();
	void setAccoes();

};

#endif