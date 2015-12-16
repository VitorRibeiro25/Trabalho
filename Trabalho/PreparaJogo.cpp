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

PreparaJogo::~PreparaJogo(){

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
	cout << "xenomo"
}


void PreparaJogo::comandos(string input, bool &erro){
	string nomeFuncao, name;

	erro = false;

	istringstream in(input);
	in >> nomeFuncao;

	if (nomeFuncao == "addsala"){
		in >> name;

		if (name == "pon"){
		}

		else if (name == "svid"){
		}

		else if (name == "esc"){
		}

		else if (name == "maq"){
		}

		else if (name == "pro"){
		}

	}

	if (nomeFuncao == "addtripulante"){
		in >> name;

		if (name == "tpn"){

		}
		else if (name == "cap"){

		}
		else if (name == "rob"){

		}

	}

	if (nomeFuncao == "addinimigo"){
		if (name == "pir"){
		}
	}

	if (nomeFuncao == "addxenomorfo"){
		if (name == "geige"){

		}

		else if (name == "cas"){

		}
		else if (name == "blob"){

		}
		else if (name == "mxyz"){

		}
	}

	if (nomeFuncao == "ajuda"){
		in >> name;
		if (name == "salas"){

		}
		else if (name == "unidades"){

		}

	}


}

int PreparaJogo::getLinhas(){
	return linhas;
}

int PreparaJogo::getColunas(){
	return colunas;
}

void PreparaJogo::setLinhas(int lin){
	linhas = lin;
}

void PreparaJogo::setColunas(int col){
	colunas = col;
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

