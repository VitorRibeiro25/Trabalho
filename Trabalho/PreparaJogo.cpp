#include "utils.h"
#include "PreparaJogo.h"

#include "Ponte.h"
#include "Escudo.h"
#include "Maquinas.h"
#include "Propulsor.h"
#include "SuporteVida.h"

#include "Inimigo.h"
#include "Tripulacao.h"
#include "Xenomorfo.h"
#include "Blob.h"
#include "Capitao.h"
#include "Casulo.h"
#include "Geigermorfo.h"
#include "MTripulacao.h"
#include "Mxyzypykwi.h"
#include "Robot.h"

//aqui tudo se vai passar na criação do jogo

PreparaJogo::PreparaJogo(){
	n = new Nave();
}

void errorMsg(string error){
	Consola c;
	c.setBackgroundColor(c.VERMELHO);
	c.setTextColor(c.BRANCO);
	c.gotoxy(3, 37);
	cout << "[ERRO] ";
	c.gotoxy(9, 37);
	cout << " " << error;
	c.getch();
	c.setBackgroundColor(c.PRETO);
}

void PreparaJogo::ajudaSalas(){

	cout << "AJUDA AO JOGADOR" << endl;
	cout << "LISTA DE COMANDOS:" << endl;
	cout << "addsala NAME" << endl;
	cout << "NAME = nome da sala - Opções: "<< endl;
	cout << "pont - Ponte (criação da sala ponte)" << endl;
	cout << "svid - Suporte de Vida (criação da sala do Suporte de Vida)" << endl;
	cout << "esc - Controlo de Escudo (Criacao da sala do Controlo de Escudo)" << endl;
	cout << "maq - Sala das Maquinas (Criacao da sala das maquinas)" << endl;
	cout << "pro - Propulsor (Criacao de um propulsor (podem ser adicionados dois sem ser os opcionais))" << endl;

}

void PreparaJogo::ajudaUnidades(){
	cout << "AJUDA AO JOGADOR" << endl;
	cout << "LISTA DE COMANDOS: " << endl;
	cout << "addtripulante NAME" << endl;
	cout << "NAME = nome do tripulante - Opcoes: " << endl;
	cout << "tpn - Membro da tripulacao (Criacao da unidade membro da tripulacao)" << endl;
	cout << "cap - Capitao (Criacao da unidade capitao)" << endl;
	cout << "rob - Robot (Criacao da unidade Robot)" << endl;
	cout << "addinimigo NAME" << endl;
	cout << "NAME = nome da inimigo - Opcoes: " << endl;
	cout << "pir - Pirata (Criacao da unidade pirata)" << endl;
	cout << "addxenomorfo NAME" << endl;
	cout << "NAME = nome do xenomorfo em questao - Opcoes: " << endl;
	cout << "gei - Geigemorfo (Criacao da unidade Geigemorfo)" << endl;
	cout << "cas - Casulo do Geigemorfo (Criacao do casulo para o Geigemorfo)" << endl;
	cout << "blob - Blob (Criacao da unidade Blob)" << endl;
	cout << "mxyz - Mxyz (Criacao da unidade Mxyz)" << endl;
}

void PreparaJogo::ajudaAntesJogo(){
	Consola c;
	c.clrscr();
	cout << "Ajuda Jogo:" << endl << endl;
	cout << "Comandos disponiveis:" << endl << endl;
	cout << "jogar - Comando que leva o utilizador para o inicio do jogo" << endl << endl;
	cout << "sair - sai do programa" << endl << endl;
	ajudaSalas();
	cout << endl << endl;
	ajudaUnidades();
	cout << endl << endl;
	cout << "PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU";
	c.getch();
	c.clrscr();

	return;

}

void PreparaJogo::Prepjogo(){
	Consola c;
	c.clrscr();
	c.gotoxy(5, 10);
	for (int i = 1; i < LIN; i++){
		for (int j = 1; j < COL; j++){

		}
	}

}

bool PreparaJogo::comandosJogo(string input, bool &erro){
	string nomeFuncao, name, name2;

	erro = false;

	istringstream in(input);
	in >> nomeFuncao;

	if (nomeFuncao == "addsala"){
		in >> name >> name2;

		if (name == "pon"){

				if (n->getSalaXY(2,4) != NULL){
					errorMsg("A sala Ponte ja existe!");
				}
				else{
					n->adicionaSala(new Ponte(), 2, 4);
				}
			}

		}

		else if (name == "svid"){
					if (n->getSalaXY(2,2) != NULL){
						errorMsg("A sala Sup. Vida ja exite!");
					}
					else {
						n->adicionaSala(new SuporteVida(), 2, 2);
					}

		}

		else if (name == "esc"){
					if (n->getSalaXY(2,3) != NULL){
						errorMsg("A sala do Escudo ja exite!");
					}
					else {
						n->adicionaSala(new Escudo(), 2, 3);
					}
				
		}

		else if (name == "maq"){

					if (n->getSalaXY(2,1) != NULL){
						errorMsg("A sala das Maquinas ja exite!");
					}
					else {
						n->adicionaSala(new Maquinas, 2, 1);
					}
				
		}

		else if (name == "pro"){
					if (n->getSalaXY(1,1) != NULL){
						errorMsg("A sala 1 do Propulsor ja existe!");
					}
					if (n->getSalaXY(3,1) != NULL){
						errorMsg("A sala 2 do Propulsor ja existe!");
					}
					if (n->getSalaXY(1,1) == NULL){
						n->adicionaSala(new Propulsor(), 1, 1);
					}
					if (n->getSalaXY(3, 1) == NULL){
						n->adicionaSala(new Propulsor(), 3, 1);
					}
	}

	else if (nomeFuncao == "addtripulante"){
		in >> name >> name2;

		if (name == "tpn"){

		}
		else if (name == "cap"){

		}
		else if (name == "rob"){
			
		}

	}

	else if (nomeFuncao == "addinimigo"){
		in >> name >> name2;
		if (name == "pir"){

		}
	}

	else if (nomeFuncao == "addxenomorfo"){
		in >> name >> name2;
		if (name == "gei"){

		}

		else if (name == "cas"){

		}
		else if (name == "blob"){

		}
		else if (name == "mxyz"){

		}
	}

	else if (nomeFuncao == "jogar"){

	}

	else if (nomeFuncao == "ajuda"){
		in >> name >> name2;
		if (name == "salas"){
			ajudaSalas();
		}
		else if (name == "unidades"){
			ajudaUnidades();
		}

	}

	else {
		erro = true;
		errorMsg("Comando Incorreto! por favor introduza outro!");
	}

	ApagaErrorMsg();
	return false;
}


void PreparaJogo::comandosMenu(){
	Consola c;
	string input, nomefunc;
	
	bool error = false;
	do{
		input = recebeComando();
		error = false;
		istringstream in(input);
		in >> nomefunc;

		if (nomefunc == "sair"){
			exit(0);
		}
		else if (nomefunc == "jogar"){
			Prepjogo();
			return;
		}
		else if (nomefunc == "ajuda"){
			ajudaAntesJogo();
		}
		else{
			errorMsg("Comando incorreto! Por favor introduza outro!");
		}
		ApagaErrorMsg();
	} while (1);

}

int PreparaJogo::getLinhas(){
	return linhas;
}

int PreparaJogo::getColunas(){
	return colunas;
}

int PreparaJogo::getposX(){
	return posX;
}

int PreparaJogo::getposY(){
	return posY;
}

void PreparaJogo::setposXY(int x, int y){
	posX = x;
	posY = y;
}

Nave *PreparaJogo::getNave(){
	return n;
}

void PreparaJogo::setLinhas(int lin){
	linhas = lin;
}

void PreparaJogo::setColunas(int col){
	colunas = col;
}

void PreparaJogo::setX(int x){
	posX = x;
}

void PreparaJogo::setY(int y){
	posY = y;
}

