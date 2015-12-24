#ifndef ROBOT_H
#define ROBOT_H
#include "utils.h"
#include "Tripulacao.h"

class Robot : public Tripulacao{
	static int id_robot;
public:
	Robot();
	void mostraUni();
	void fazOrdens();
	void fazFim();
};


#endif