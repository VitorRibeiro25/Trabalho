#ifndef INIMIGOC_H
#define INIMIGOC_H
#include "utils.h"
#include "Accoes.h"

class InimigoC : public Accao{
	int val1, val2;
public:
	InimigoC(int x, int y, Unidades*u);
	~InimigoC();
	void fazAccoes(int value1, int value2);
};
#endif