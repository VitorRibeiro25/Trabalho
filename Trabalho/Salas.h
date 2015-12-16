#ifndef SALAS_H
#define SALAS_H
#include "utils.h"

class Nave;

class Unidades;

using namespace std;


class Sala{
	vector <Unidades *> unidades;
	string nome;
	static int id_sal;
	int vida, oxigenio, integridade;
public:

	// construtor e destrutor
	Sala();
	~Sala();

	// funcoes gets
	string getNome();
	int getVida();
	int getOxigenio();
	int getIntegridade();
	int getID();

	//funcoes sets
	void setNome(string name);
	void setVida(int vid);
	void setOxigenio(int oxig);
	void setIntegridade(int integri);
	void setID(int id);

	//funcao de mostrar
	string mostraSala();
};

#endif