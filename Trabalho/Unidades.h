#ifndef TRIPULANTE_H
#define TRIPULANTE_H
#include "utils.h"
#include "Salas.h"

using namespace std;

class Accao;

class Unidades{
	string nome;
	int vida, dano;
	int lin, col;
	int id;
	static int id_uni;
	Sala *s;
	vector <Accao *> accao;
public:
	// construtor e destrutor
	Unidades(int x, int y, Sala *s);
	~Unidades();

	// funcoes gets
	string getNome();
	int getId();
	int getVida();
	int getLin();
	int getCol();
	int getDano();
	Sala *getPonteiroSala();

	//funcao sets
	void setNome(string name);
	void setId(int idi);
	void setVida(int vid);
	void setDano(int dan);
	void setLin(int x);
	void setCol(int y);
	void setPos(int x, int y);


	// funcao de mostrar
	virtual string mostraUnidade();
	string mostraID();

	// carateristicas para as unidades
	void insereAccao(Accao *a);

	//outras funcoes necessarias

	void perdeOxi(int val);
	virtual void fazInicio();	
	virtual void fazOrdens();
	virtual void fazFim();


};

#endif