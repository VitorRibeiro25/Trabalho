#ifndef BLOB_H
#define BLOB_H
#include "utils.h"
#include "Unidades.h"

class Blob : public Unidades{
	static int id_blob;
public:
	Blob(int x, int y);
	string mostraUnidade();
	void fazInicio();
	void fazOrdens();
	void fazFim();

};

#endif