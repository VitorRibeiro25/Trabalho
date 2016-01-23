#ifndef ANTES_JOGO_H
#define ANTES_JOGO_H

#include "utils.h"
#include "Nave.h"
#include "Salas.h"
#include "Unidades.h"
#include "MTripulacao.h"


class PreparaJogo{
	int linhas, colunas, id;
	int posX, posY;
	static int turno;
	int i_pro;
	Nave *n;
	Unidades *u;
	static int jogadas;
	static int milhas;

public:

	// construtor e destrutor
	PreparaJogo();
	~PreparaJogo();

	// funcoes para comecar a nave a "andar"
	void comecaNave();
	void avancaTurno();
	void moveUni(int id, int x, int y);
	void acabaJogo();
	void verificaNave();

	// funcao de preparajogo
	void Prepjogo();

	// funcao Update
	void AtualizaMapa();

	// funcoes de comandos
	void erroMsg(string error);
	int comandosJogo(string input);
	bool comandosMenu();
	void geraJogo();

	//funcoes gets
	int getLinhas();
	int getColunas();
	int getId();
	int getposX();
	int getMilhas();
	int getposY();
	Nave *getNave();
	Unidades *getUnidade();

	//funcoes sets
	void setLinhas(int lin);
	void setColunas(int col);
	void setId(int ide);
	void setX(int x);
	void setY(int y);
	void setposXY(int x, int y);

	// funcao de ajuda ao utilizador
	void ajudaSalas();
	void ajudaUnidades();
	void ajudaAntesJogo();
	int verificaJogo();

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
	void infoSala(int lin, int col);
	void infoSalaEscudo(int lin, int col);
	void infoUni(int id, int lin, int col);
};


#endif