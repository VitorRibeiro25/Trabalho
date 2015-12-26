#include "Interface.h"

Interface::Interface(){
	start = new PreparaJogo();
	start->setposXY(0, 0);
}

void Interface::menu(){
	while (true){
		MenuInterface();
		start->comandosMenu();
		Comeca();
	}
}

void Interface::Comeca(){
	string input;
	bool error = true;
	ComecaInterface();
	while (true){
		DesenhaNave();
		do{
			input = recebeComando();
			if (start->comandosJogo(input, error) == true)
				return;
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


void Interface::DesenhaNave(){
	Consola c;
	c.setTextColor(c.BRANCO);
	
	DesenhaLimites();
	for (int i = 0; i < LIN; i++){
		for (int j = 0; j < COL; j++){					
			c.gotoxy(10,12);
			if (start->getNave()->getSalaXY(i, j) == NULL){

				cout << "VAZ ";
			}
			else{
				Sala *s = start->getNave()->getSalaXY(i, j);
				cout << s->mostraSala() << endl;
			}
		}
	}
	

}

void Interface::DesenhaLimites(){
	Consola c;

	c.gotoxy(5, 10);
	cout << (char)218 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)191 << '\n';

	// coluna 1
	for (int i = 11; i < 22; i++){
		c.gotoxy(5, i);
		cout << (char)179;
	}
	// coluna 2
	c.gotoxy(17, 10);
	cout << (char)194;
	for (int i = 11; i < 22; i++){
		c.gotoxy(17, i);
		cout << (char)179;
	}
	c.gotoxy(17, 22);
	cout << (char)193;

	//coluna 3
	c.gotoxy(29, 10);
	cout << (char)194;
	for (int i = 11; i < 22; i++){
		c.gotoxy(29, i);
		cout << (char)179;
	}
	c.gotoxy(29, 22);
	cout << (char)193;
	//coluna 4
	c.gotoxy(41, 10);
	cout << (char)194;
	for (int i = 11; i < 22; i++){
		c.gotoxy(41, i);
		cout << (char)179;
	}
	c.gotoxy(41, 22);
	cout << (char)193;

	// coluna 5
	c.gotoxy(53, 10);
	cout << (char)191;
	for (int i = 11; i < 22; i++){
		c.gotoxy(53, i);
		cout << (char)179;
	}
	c.gotoxy(53, 22);
	cout << (char)217;

	//linhas
	for (int i = 6; i < 53; i++){
		c.gotoxy(i, 14);
		cout << (char)196;
		c.gotoxy(i, 18);
		cout << (char)196;
	}

	c.gotoxy(5, 22);
	cout << (char)192 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196
		<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << '\n';

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

void Interface::mostraColsJogo(int x){
	Consola c;
	c.gotoxy(x, 3);

}

void Interface::mostraLinsJogo(int y){

}