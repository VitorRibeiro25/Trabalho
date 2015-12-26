#ifndef ROBOT_H
#define ROBOT_H
#include "utils.h"
#include "Unidades.h"

class Robot : public Unidades{
	static int id_robot;
public:
	Robot(int x, int y);
	string mostraUnidade();
	void fazOrdens();
	void fazFim();
};


#endif