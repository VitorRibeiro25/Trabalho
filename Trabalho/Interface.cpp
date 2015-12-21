#include "Interface.h"

Interface::Interface(){
	start = new PreparaJogo();
	start->setposXY(0, 0);
}

void Interface::menu(){
	while (true){
		MenuInterface();
		if (start->comandosMenu() == true)
			return;
	}
}

void Interface::ComecaMapaJogo(){
	Consola c;
	
	// aqui vai percorrer a nave, ou sej, vai mostrar o vetor de salas vazias, o tal array bidimensional -> perguntar tareco

}

void Interface::Comeca(){
	string input;
	bool error = true;
	ComecaInterface();
	while (true){
		ComecaMapaJogo();
		do{
			input = recebeComando();
			ApagaErrorMsg();
		} while (error = true);
	}

}

void Interface::ComecaInterface(){
	Consola c;
	//Faz interface
	c.clrscr();
	BoxInformations();
	BoxMap();
	BoxCommands();
}

void Interface::MenuInterface(){
	Consola c;
	
	c.gotoxy(1, 35);
	cout << (char)201;

	for (int i = 2; i < 78; i++){
		c.gotoxy(i, 35);
		cout << (char)205;
	}
	c.gotoxy(78, 35);
	cout << (char)187;

	c.gotoxy(1, 36);
	cout << (char)186;
	c.gotoxy(1, 37);
	cout << (char)186;
	c.gotoxy(1, 38);
	cout << (char)186;
	c.gotoxy(78, 36);
	cout << (char)186;
	c.gotoxy(78, 37);
	cout << (char)186;
	c.gotoxy(78, 38);
	cout << (char)186;

	c.gotoxy(1, 39);
	cout << (char)200;
	for (int i = 2; i < 78; i++){
		c.gotoxy(i, 39);
		cout << (char)205;
	}
	c.gotoxy(78, 39);
	cout << (char)188;

	c.gotoxy(17, 5);
	cout << "Trabalho de Programacao Orientada a Objetos";
	c.gotoxy(28, 10);
	cout << "Andre Vicente, 21230112";
	c.gotoxy(28, 12);
	cout << "Vitor Ribeiro, 21230473";
	c.gotoxy(17,18);
	cout << "Comandos disponiveis";
	c.gotoxy(22, 20);
	cout << " - jogar";
	c.gotoxy(22, 22);
	cout << " - ajuda";
	c.gotoxy(22, 24);
	cout << " - sair";
}

void Interface::BoxInformations(){
	Consola c;
	//Caixa das Informações
	c.gotoxy(63, 1);
	cout << (char)218 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)191 << '\n';

	for (int i = 2; i < 34; i++){
		c.gotoxy(63, i);
		cout << (char)179;
		c.gotoxy(78, i);
		cout << (char)179;
	}
	c.gotoxy(65, 3);
	cout << "Informacoes: ";
	c.gotoxy(63, 34);
	cout << (char)192 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)217 << '\n';
}

void Interface::BoxMap(){
	Consola c;
	c.gotoxy(1, 4);
	cout << (char)218 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)191 << '\n';

	for (int i = 5; i < 35; i++){
		c.gotoxy(1, i);
		cout << (char)179;
	}
	for (int i = 5; i < 35; i++){
		c.gotoxy(61, i);
		cout << (char)179 << endl;
	}
	c.gotoxy(1, 34);
	cout << (char)192 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)217 << '\n';
}

void Interface::BoxCommands(){
	Consola c;
	//Caixa dos comandos
	c.gotoxy(1, 35);
	cout << (char)201;
	for (int i = 2; i < 78; i++){
		c.gotoxy(i, 35);
		cout << (char)205;
	}
	c.gotoxy(78, 35);
	cout << (char)187;

	//centro
	c.gotoxy(1, 36);
	cout << (char)186;
	c.gotoxy(1, 37);
	cout << (char)186;
	c.gotoxy(1, 38);
	cout << (char)186;
	c.gotoxy(78, 36);
	cout << (char)186;
	c.gotoxy(78, 37);
	cout << (char)186;
	c.gotoxy(78, 38);
	cout << (char)186;

	//parte de baixo
	c.gotoxy(1, 39);
	cout << (char)200;
	for (int i = 2; i < 78; i++){
		c.gotoxy(i, 39);
		cout << (char)205;
	}
	c.gotoxy(78, 39);
	cout << (char)188;
}