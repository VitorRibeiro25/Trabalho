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
	Nave *n;
	Unidades *u;
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

	// funcao de preparajogo
	void Prepjogo();

	// funcao Update
	void AtualizaMapa();

	// funcoes de comandos
	void erroMsg(string error);
	bool comandosJogo(string input);
	bool comandosMenu();

	//funcoes gets
	int getLinhas();
	int getColunas();
	int getId();
	int getposX();
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
	bool verificaJogo();

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
	void infoUni(int id, int lin, int col);
};


#endif