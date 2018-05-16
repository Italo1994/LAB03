#include <iostream>
#include <string>
#include <vector>

#include "conta.h"
#include "agencia.h"
#include "interface.h"
#include "movimentacoes.h"

using namespace std;

int main(int argc, char* argv[]){

	escolherAcao();

	//Agencia ag;

	//ag.criarConta();
	

	//ag.verificarContas( );

	cout << "Num = " << Conta::totalContas << endl;

	return 0;
}












/*Conta c1;

	c1.setAgencia("BB");
	c1.setNumero("4455-8");
	c1.setSaldo(7455.75);
	c1.setStatus("Especial");
	c1.setLimite(15000.00);
	c1.setMovimentacoes(2);

	cout << "Agência: " << c1.getAgencia() << endl;

	cout << "Número da agência: " << c1.getNumero() << endl;

	cout << "Saldo: " << c1.getSaldo() << endl;

	cout << "Status: " << c1.getStatus() << endl;

	cout << "Limite: " << c1.getLimite() << endl;

	cout << "Movimentações: " << c1.getMovimentacoes() << endl; */