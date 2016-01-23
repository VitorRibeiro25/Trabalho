#ifndef ROBOT_H
#define ROBOT_H
#include "utils.h"
#include "Unidades.h"
#include "Combatente.h"

class Robot : public Unidades{
public:
	Robot(int x, int y, Sala *s);
	string mostraUnidade();
	void setAccoes();	
};


#endif