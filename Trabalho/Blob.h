#ifndef BLOB_H
#define BLOB_H
#include "utils.h"
#include "Xenomorfo.h"

class Blob : public Xenomorfo{
	static int id_blob;
public:
	Blob();
	virtual string mostraBlob();
};

#endif