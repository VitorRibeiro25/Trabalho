#ifndef INTERFACE_H
#define INTERFACE_H

#include "consola.h"
#include "PreparaJogo.h"
#include "utils.h"


class Interface{
public:
	PreparaJogo * start;

	Interface();
	~Interface();

	void menu();
	void Comeca();

	void MenuInterface();
	void ComecaInterface();
	void ComecaMapaJogo();

	void BoxMap();
	void BoxInformations();
	void BoxCommands();
	void resetMap();

};

#endif