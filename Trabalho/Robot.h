#ifndef ROBOT_H
#define ROBOT_H
#include "utils.h"
#include "Tripulacao.h"

class Robot : public Tripulacao{
	static int id_robot;
public:
	Robot();
	virtual string mostraRobot();
	virtual void fazOrdens();
	virtual void fazFim();
};


#endif