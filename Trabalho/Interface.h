#ifndef INTERFACE_H
#define INTERFACE_H

#include "consola.h"
#include "PreparaJogo.h"
#include "Nave.h"
#include "Salas.h"
#include "Unidades.h"
#include "utils.h"


class Interface{
	static int milhasI;
public:
	PreparaJogo * start;

	Interface();
	~Interface();

	void menu();
	void Comeca();

	void MenuInterface();
	void ComecaInterface();
	void ComecaJogo();
	void ComecaMapaJogo();
	void mostraColsJogo(int x);
	void mostraLinsJogo(int y);

	void DesenhaNave();
	void DesenhaLimites();
	void BoxMap();
	void BoxInformations();
	void BoxCommands();
	void resetMap();

};

#endif