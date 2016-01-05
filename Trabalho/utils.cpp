#include "utils.h"

int numero_aleat(int num){
	return rand() % num + 1;
}

void init_alea(){
	srand((unsigned)time(NULL));
}

string recebeComando(){
	Consola c;
	string input;

	c.setTextColor(c.BRANCO);
	c.gotoxy(4, 37);
	cout << "Comando >>> ";
	getline(cin, input);


	return input;
}

void ApagaErrorMsg(){
	Consola c;
	c.setTextColor(c.PRETO);
	for (int i = 3; i < 77; i++){
		c.gotoxy(i, 37);
		cout << " ";
	}
	c.setTextColor(c.BRANCO);

}