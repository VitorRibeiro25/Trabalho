#ifndef TRIPULANTE_H
#define TRIPULANTE_H
#include "utils.h"
#include "Salas.h"

using namespace std;


class Unidades{
	string nome;
	int vida, dano;
	static int contador;
	int id_uni;
	Sala *ondeEstou;
public:
	// construtor e destrutor
	Unidades(string name);
	Unidades();
	~Unidades();

	// funcoes gets
	string getNome();
	int getId();
	int getVida();
	int getDano();
	Sala *getOndeEstou();
	int getOxigenioSala();

	//funcao sets
	void setNome(string name);
	void setId(int id);
	void setVida(int vid);
	void setDano(int dan);
	void setOndeEstou(Sala *s);
	void setOxigenioSala(int ox);

	// funcao de mostrar
	string mostraUnidades();

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


};

#endif