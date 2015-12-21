#include "utils.h"
#include "consola.h"
#include "Interface.h"


void main(){

	Consola c;
	
	Interface *janela = new Interface();

	c.setScreenSize(41, 80);

	init_alea();

	janela->menu();
	janela->Comeca();

}