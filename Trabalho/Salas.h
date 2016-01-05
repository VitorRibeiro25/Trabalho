#ifndef SALAS_H
#define SALAS_H
#include "utils.h"

class Nave;

class Unidades;


class Sala{
	vector <Unidades *> unidades;
	string nome;
	int id;
	static int id_sal;
	int x, y;
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
	int getX();
	int getY();

	// funcoes de mover
	Unidades *getUniID(int id);
	void removeID(int id);

	//funcoes sets
	void setNome(string name);
	void setVida(int vid);
	void setOxigenio(int oxig);
	void setIntegridade(int integri);
	void setID(int idi);

	void perdeVida(int vid);

	// funcao de adicionar
	void addUnidade(Unidades *s);
	bool checkUnit(string nom);
	bool checkUnitID(int id_uni);
	
	//funcao de mostrar
	string mostraSala();
	string mostraUniID();
	string mostraNome();
	string mostraUnidade(int id_uni);

	// faz accoes
	virtual string mostra();

	// funcoes de turnos
	void inicioTurno();
	void faseOrdens();
	void fimTurno();
};
#endif