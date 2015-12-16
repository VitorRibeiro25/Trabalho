#include "utils.h"

string recebeComando(){
	string input;

	cout << "Comando >>> ";
	getline(cin, input);

	return input;
}