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

}

void PreparaJogo::Prepjogo(){

}

bool PreparaJogo::comandosJogo(string input, bool &erro){
	string nomeFuncao, name, name2;

	erro = false;

	// falta fazer verificacoes

	istringstream in(input);
	in >> nomeFuncao;

	if (nomeFuncao == "addsala"){
		in >> name >> name2;

		if (name == "pon"){
			addPonte();
		}

		else if (name == "svid"){
			addSupVida();
		}

		else if (name == "esc"){
			addEscudo();
		}

		else if (name == "maq"){
			addMaquina();
		}

		else if (name == "pro"){
			addPropulsor();
		}

	}

	else if (nomeFuncao == "addtripulante"){
		in >> name >> name2;

		if (name == "tpn"){
			addMtrip();

		}
		else if (name == "cap"){
			addCapitao();

		}
		else if (name == "rob"){
			addRobot();

		}

	}

	else if (nomeFuncao == "addinimigo"){
		in >> name >> name2;
		if (name == "pir"){
			addInimigo();
		}
	}

	else if (nomeFuncao == "addxenomorfo"){
		in >> name >> name2;
		if (name == "gei"){
			addGeige();
		}

		else if (name == "cas"){
			addCasulo();
		}
		else if (name == "blob"){
			addBlob();

		}
		else if (name == "mxyz"){
			addMxyz();
		}
	}

	else if (nomeFuncao == "jogar"){
		Prepjogo();
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
		erroMsg("Comando Incorreto! por favor introduza outro!");
		erro = true;
	}

	ApagaErrorMsg();
	return false;
}




bool PreparaJogo::comandosMenu(){
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
		}
		else if (nomefunc == "ajuda"){
			
		}
		else{
			errorMsg("Comando incorreto! Por favor introduza outro!");
		}
		ApagaErrorMsg();
	} while (error == true);
	return false;

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

void PreparaJogo::addEscudo(){
	salas[2][3] = new Escudo;
}

void PreparaJogo::addMaquina(){
	salas[2][1] = new Maquinas;
}

void PreparaJogo::addPonte(){
	salas[2][4] = new Ponte;
}

void PreparaJogo::addPropulsor(){
	if (salas[1][1] == nullptr)
		salas[1][1] = new Propulsor;
	else salas[3][1] = new Propulsor;
}

void PreparaJogo::addSupVida(){
	salas[2][2] = new SuporteVida;
}

void PreparaJogo::addInimigo(){
	unidades.push_back(new Inimigo);
}

void PreparaJogo::addBlob(){
	unidades.push_back(new Blob);
}

void PreparaJogo::addCapitao(){
	unidades.push_back(new Capitao);
}

void PreparaJogo::addCasulo(){
	unidades.push_back(new Casulo);
}

void PreparaJogo::addGeige(){
	unidades.push_back(new Geigemorfo);
}

void PreparaJogo::addMtrip(){
	unidades.push_back(new Mtripulacao);
}

void PreparaJogo::addMxyz(){
	unidades.push_back(new Mxyz);
}

void PreparaJogo::addRobot(){
	unidades.push_back(new Robot);
}

