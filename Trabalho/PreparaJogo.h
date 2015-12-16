#ifndef ANTES_JOGO_H
#define ANTES_JOGO_H

#include "utils.h"
#include "Nave.h"
#include "Salas.h"
#include "Unidades.h"


class PreparaJogo{
	int linhas, colunas;
	Sala *salas[3][5];
	vector <Unidades *> unidades;

public:

	// construtor e destrutor
	PreparaJogo();
	~PreparaJogo();

	// funcoes de comandos
	void erroMsg(string error);
	void comandos(string input, bool &erro);

	//funcoes gets
	int getLinhas();
	int getColunas();

	//funcoes sets
	void setLinhas(int lin);
	void setColunas(int col);

	// funcao de ajuda ao utilizador
	void ajudaSalas();
	void ajudaUnidades();

	// funcoes de adicionar salas
	void addEscudo();
	void addMaquina();
	void addPonte();
	void addPropulsor();
	void addSupVida();

	// funcoes de adicionar unidades
	void addInimigo();
	void addBlob();
	void addCapitao();
	void addCasulo();
	void addGeige();
	void addMtrip();
	void addMxyz();
	void addRobot();

	// funcao de mostrar
	void mostra();
};


#endif