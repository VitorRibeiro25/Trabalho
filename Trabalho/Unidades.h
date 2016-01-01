#ifndef TRIPULANTE_H
#define TRIPULANTE_H
#include "utils.h"
#include "Salas.h"

using namespace std;


class Unidades{
	string nome;
	int vida, dano;
	int lin, col;
	static int id_uni;
	Sala *ondeEstou;
	Sala *oxigenio;
public:
	// construtor e destrutor
	Unidades(int x, int y);
	~Unidades();

	// funcoes gets
	string getNome();
	int getId();
	int getVida();
	int getLin();
	int getCol();
	int getDano();
	Sala *getOndeEstou();
	Sala *getOxigenio();

	//funcao sets
	void setNome(string name);
	void setId(int id);
	void setVida(int vid);
	void setDano(int dan);
	void setLin(int x);
	void setCol(int y);
	void setPos(int x, int y);
	void setOndeEstou(Sala *s);
	void setOxigenio(Sala *s);

	// funcao de mostrar
	virtual string mostraUnidade();

	// carateristicas para as unidades
	// prob - probablilidade
	void respira();
	void flamejante();
	void toxico(int ganhaVida);
	void indeciso();
	void misterioso();
	void regenerador(int ganhaVida);
	void exoesqueleto(int previneDano);
	void robotico();
	void reparador(int ReparaDano);
	void combatente(int provocaDano);
	void xenomorfo(int provocaDano);
	void casulo(int prob);
	void mutaisMutandis(int prob);
	void hipnotizador(int prob);
	void operador();
	void tripulacao();
	void inimigo(int danoUnid, int danoSala);
	void move(int prob);
	void armado(int ganhaDano);

	//outras funcoes necessarias

	void perdeOxi(int val);
	virtual void fazInicio();	
	virtual void fazOrdens();
	virtual void fazFim();


};

#endif