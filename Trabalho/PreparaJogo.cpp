#include "utils.h"
#include "PreparaJogo.h"

#include "Salas.h"
#include "Ponte.h"
#include "Escudo.h"
#include "Maquinas.h"
#include "Propulsor.h"
#include "SuporteVida.h"
#include "Beliche.h"

#include "Inimigo.h"
#include "Blob.h"
#include "Capitao.h"
#include "Casulo.h"
#include "Geigermorfo.h"
#include "MTripulacao.h"
#include "Mxyzypykwi.h"
#include "Robot.h"

int PreparaJogo::turno = 0;

int PreparaJogo::milhas = 0;

//aqui tudo se vai passar na criação do jogo

PreparaJogo::PreparaJogo(){
	n = new Nave();
}

PreparaJogo::~PreparaJogo(){

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
	Consola c;
	c.gotoxy(10, 10);
	c.clrscr();
	cout << "AJUDA AO JOGADOR" << endl;
	cout << "LISTA DE COMANDOS:" << endl;
	cout << "addsala NAME" << endl;
	cout << "NAME = nome da sala - Opções: "<< endl;
	cout << "pont - Ponte (criação da sala ponte)" << endl;
	cout << "svid - Suporte de Vida (criação da sala do Suporte de Vida)" << endl;
	cout << "esc - Controlo de Escudo (Criacao da sala do Controlo de Escudo)" << endl;
	cout << "maq - Sala das Maquinas (Criacao da sala das maquinas)" << endl;
	cout << "pro - Propulsor (Criacao de um propulsor (podem ser adicionados dois sem ser os opcionais))" << endl;
	c.getch();
	c.clrscr();
	return;
}

void PreparaJogo::ajudaUnidades(){
	Consola c;
	c.gotoxy(10, 10);
	c.clrscr();
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
	c.getch();
	return;
}

void PreparaJogo::ajudaAntesJogo(){
	Consola c;
	c.clrscr();
	cout << "Ajuda Jogo:" << endl << endl;
	cout << "Comandos disponiveis:" << endl << endl;
	cout << "jogar - Comando que leva o utilizador para o inicio do jogo" << endl << endl;
	cout << "sair - sai do programa" << endl << endl;
	cout << "PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU";
	c.getch();
	return;

}

void PreparaJogo::Prepjogo(){

}

bool PreparaJogo::comandosJogo(string input){
	string nomeFuncao, name, name2;

	istringstream in(input);
	in >> nomeFuncao;

	if (nomeFuncao == "addsala"){
		in >> name >> linhas >> colunas;

		if (name == "pon"){
			if (n->getSalaXY(2, 4) != NULL){
				errorMsg("A sala Ponte ja existe!");
			}
			else{
				n->adicionaSala(new Ponte(), 2, 4);
			}
		}

		else if (name == "svid"){
			if (n->getSalaXY(2, 2) != NULL){
				errorMsg("A sala Sup. Vida ja exite!");
			}
			else {
				n->adicionaSala(new SuporteVida(), 2, 2);
			}

		}

		else if (name == "esc"){
			if (n->getSalaXY(2, 3) != NULL){
				errorMsg("A sala do Escudo ja exite!");
			}
			else {
				n->adicionaSala(new Escudo(), 2, 3);
			}

		}

		else if (name == "maq"){

			if (n->getSalaXY(2, 1) != NULL){
				errorMsg("A sala das Maquinas ja exite!");
			}
			else {
				n->adicionaSala(new Maquinas(), 2, 1);
			}

		}

		else if (name == "pro"){
			if (n->getSalaXY(1, 1) != NULL){
				errorMsg("A sala 1 do Propulsor ja existe!");
			}
			if (n->getSalaXY(3, 1) != NULL){
				errorMsg("A sala 2 do Propulsor ja existe!");
			}
			if (n->getSalaXY(1, 1) == NULL){
				n->adicionaSala(new Propulsor(), 1,1);
			}
			if (n->getSalaXY(3, 1) == NULL){
				n->adicionaSala(new Propulsor(), 3, 1);
			}
		}
		
		else if (name == "bel"){
			if (n->getSalaXY(linhas, colunas) == NULL)
				n->adicionaSala(new Beliche(), linhas, colunas);
			else if (linhas == NULL && colunas == NULL){
				errorMsg("Linhas e colunas em falta!");
			}
		}
	}

	else if (nomeFuncao == "addtripulante"){
		in >> name >> linhas >> colunas;

		if (name == "tpn"){
			if (n->getSalaXY(linhas, colunas) == NULL){
				errorMsg("A sala com as Coordenadas indicadas nao existe!");
			}
			else if (linhas == NULL && colunas == NULL){
				errorMsg("Linhas e colunas em falta!");
			}
			else{
				n->adcionaUnidade(new Mtripulacao(linhas,colunas), linhas, colunas);
			}
		}
		else if (name == "cap"){
			if (n->getSalaXY(linhas, colunas) == NULL){
				errorMsg("A sala com as Coordenadas indicadas nao existe!");
			}
			else if (linhas == NULL && colunas == NULL){
				errorMsg("Linhas e colunas em falta!");
			}
			else{
				n->adcionaUnidade(new Capitao(linhas, colunas), linhas, colunas);
			}
		}
		else if (name == "rob"){
			if (n->getSalaXY(linhas, colunas) == NULL){
				errorMsg("A sala com as Coordenadas indicadas nao existe!");
			}
			else if (linhas == NULL && colunas == NULL){
				errorMsg("Linhas e colunas em falta!");
			}
			else{
				n->adcionaUnidade(new Robot(linhas, colunas), linhas, colunas);
			}
		}
	}

	else if (nomeFuncao == "addinimigo"){
		in >> name >> linhas >> colunas;
		if (name == "pir"){
			if (n->getSalaXY(linhas, colunas) == NULL){
				errorMsg("A sala com as Coordenadas indicadas nao existe!");
			}
			else if (linhas == NULL && colunas == NULL){
				errorMsg("Linhas e colunas em falta!");
			}
			else{
				n->adcionaUnidade(new Inimigo(linhas, colunas), linhas, colunas);
			}
		}
	}

	else if (nomeFuncao == "addxenomorfo"){
		in >> name >> linhas >> colunas;
		if (name == "gei"){
			if (n->getSalaXY(linhas, colunas) == NULL){
				errorMsg("A sala com as Coordenadas indicadas nao existe!");
			}
			else if (linhas == NULL && colunas == NULL){
				errorMsg("Linhas e colunas em falta!");
			}
			else{
				n->adcionaUnidade(new Geigemorfo(linhas, colunas), linhas, colunas);
			}
		}

		else if (name == "cas"){
			if (n->getSalaXY(linhas, colunas) == NULL){
				errorMsg("A sala com as Coordenadas indicadas nao existe!");
			}
			else if (linhas == NULL && colunas == NULL){
				errorMsg("Linhas e colunas em falta!");
			}
			else{
				n->adcionaUnidade(new Casulo(linhas, colunas), linhas, colunas);
			}

		}
		else if (name == "blob"){
			if (n->getSalaXY(linhas, colunas) == NULL){
				errorMsg("A sala com as Coordenadas indicadas nao existe!");
			}
			else if (linhas == NULL && colunas == NULL){
				errorMsg("Linhas e colunas em falta!");
			}
			else{
				n->adcionaUnidade(new Blob(linhas, colunas), linhas, colunas);
			}

		}
		else if (name == "mxyz"){
			if (n->getSalaXY(linhas, colunas) == NULL){
				errorMsg("A sala com as Coordenadas indicadas nao existe!");
			}
			else if (linhas == NULL && colunas == NULL){
				errorMsg("Linhas e colunas em falta!");
			}
			else{
				n->adcionaUnidade(new Mxyz(linhas, colunas), linhas, colunas);
			}
		}
	}

	else if (nomeFuncao == "jogar"){
		if (verificaJogo() == false){
			return false;
		}
		else return true;
	}

	else if (nomeFuncao == "ajuda"){
		in >> name;
		if (name == "salas"){
			ajudaSalas();
		}
		else if (name == "unidades"){
			ajudaUnidades();
		}

	}

	else if (nomeFuncao == "move"){
		in >> id >> linhas >> colunas;

		n->moveUni(id, linhas, colunas);

	}

	else if (nomeFuncao == "avanca"){
		avancaTurno();
	}
	
	else if (nomeFuncao == "versala"){
		in >> name >> linhas >> colunas;
		if (linhas == NULL || colunas == NULL){
			errorMsg("Linhas e Colunas em falta!");
		}
		else if (name == "pon"){
			infoSala(linhas,colunas);
		}
		else if (name == "svid"){
			infoSala(linhas,colunas);
		}
		else if (name == "pro"){
			infoSala(linhas,colunas);
		}
		else if (name == "maq"){
			infoSala(linhas,colunas);
		}
		else if (name == "esc"){
			infoSala(linhas,colunas);
		}
		else if (name == "bel"){
			infoSala(linhas, colunas);
		}
	}

	else if (nomeFuncao == "veruni"){
		in >> name >> id >> linhas >> colunas;
		if (name == "tpn"){
			infoUni(id, linhas, colunas);
		}
	}

	else if (nomeFuncao == "sair"){
		exit(0);
	}

	else {
		errorMsg("Comando Incorreto! por favor introduza outro!");
	}

	ApagaErrorMsg();
	return false;
}

void PreparaJogo::avancaTurno(){
	
	milhas = milhas + 1000;
	
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
			return true;
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

void PreparaJogo::infoSala(int lin, int col){
	Consola c;
	string info = n->getSalaXY(lin, col)->mostraSala();
	c.gotoxy(0, 0);
	cout << info;

}


void PreparaJogo::infoUni(int id, int lin, int col){
	Consola c;
	string info = n->getSalaXY(lin, col)->mostraUnidade(id);
	c.gotoxy(0, 0);
	cout << info;

}

void PreparaJogo::moveUni(int id, int x, int y){
	if (n->checkUnidadeXYID(id, x, y) == false){
		errorMsg("Nao existe uma unidade com o id indicado!");
	}
}

bool PreparaJogo::verificaJogo(){
	if (n->getSalaXY(2, 4) == NULL){
		errorMsg("O jogo nao pode comecar pois a sala Ponte nao esta criada!");
		return false;
	}
	else if (n->checkUnidadeXY("TRI", 2, 4) == false){
		errorMsg("Nao existe nenhuma unidade para pilotar a nave!");
		return false;
	}
	else if (n->getSalaXY(2, 1) == NULL){
		errorMsg("O jogo nao pode comecar porque a sala das Maquinas nao existe!");
		return false;
	}
	else if (n->getSalaXY(1, 1) == NULL || n->getSalaXY(3, 1) == NULL){
		errorMsg("O jogo nao pode comecar porque a nave nao tem propulsores!");
		return false;
	}
	else return true;
}

void PreparaJogo::comecaNave(){
	Consola c;
	int meta_milhas = 4000;
	comandosJogo(recebeComando());
	milhas += 250;
	turno++;
	if (turno == 1){
		n->PosCosmico(turno);
	}
	if (meta_milhas < milhas){
		acabaJogo();
	}

}

void PreparaJogo::acabaJogo(){
	Consola c;
	c.clrscr();
	cout << "PARABENS!!!!" << endl;
	cout << "Voce ganhou o jogo!" << endl;
	cout << "Conseguiu chegar ao destino!" << endl;
	exit(0);
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

int PreparaJogo::getId(){
	return id;
}

void PreparaJogo::setposXY(int x, int y){
	posX = x;
	posY = y;
}

Nave *PreparaJogo::getNave(){
	return n;
}

Unidades *PreparaJogo::getUnidade(){
	return u;
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

void PreparaJogo::setId(int ide){
	id = ide;
}

