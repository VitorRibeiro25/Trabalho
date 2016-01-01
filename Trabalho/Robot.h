#ifndef ROBOT_H
#define ROBOT_H
#include "utils.h"
#include "Unidades.h"

class Robot : public Unidades{
public:
	Robot(int x, int y);
	string mostraUnidade();
	void fazOrdens();
	void fazFim();
};


#endif