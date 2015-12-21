#ifndef ANTES_JOGO_H
#define ANTES_JOGO_H

#include "utils.h"
#include "Nave.h"
#include "Salas.h"
#include "Unidades.h"


class PreparaJogo{
	int linhas, colunas;
	int posX, posY;
	Sala *salas[3][5];
	vector <Unidades *> unidades;

public:

	// construtor e destrutor
	PreparaJogo();
	~PreparaJogo();

	// funcao de preparajogo
	void Prepjogo();

	// funcoes de comandos
	void erroMsg(string error);
	bool comandosJogo(string input, bool &erro);
	bool comandosMenu();

	//funcoes gets
	int getLinhas();
	int getColunas();
	int getposX();
	int getposY();

	//funcoes sets
	void setLinhas(int lin);
	void setColunas(int col);
	void setX(int x);
	void setY(int y);
	void setposXY(int x, int y);

	// funcao de ajuda ao utilizador
	void ajudaSalas();
	void ajudaUnidades();
	void ajudaAntesJogo();

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