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
	int escudo;
	Nave *n;
public:

	// construtor e destrutor
	Sala();
	~Sala();

	// funcoes gets
	Nave *getNave();
	string getNome();
	int getVida();
	int getEscudo();
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
	void setEscudo(int esc);
	void setOxigenio(int oxig);
	void setIntegridade(int integri);
	void setID(int idi);

	void perdeVida(int vid);
	void ganhaOxi(int oxi);
	void perdeVidaEscudo(int esc);

	// funcao de adicionar
	void addUnidade(Unidades *s);
	bool checkUnit(string nom);
	bool checkUnitID(int id_uni);
	bool percorreUni();
	
	//funcao de mostrar
	string mostraSala();
	string mostraSalaEsc();
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