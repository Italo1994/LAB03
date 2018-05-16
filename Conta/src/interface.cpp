#include <iostream>
#include "interface.h"
#include "conta.h"
#include "agencia.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

	void menu(){

		cout << "-----------------------------------------------------------------------------" << endl;
		cout << "                            MENU DE OPÇÕES                                   " << endl;
		cout << "-----------------------------------------------------------------------------" << endl;

		cout << "    CÓDIGO -> (n ou N):     SAIR DO PROGRAMA                                   " << endl;
		cout << "    CÓDIGO -> (1):     CRIAR CONTA                                             " << endl;
		cout << "    CÓDIGO -> (2):     VISUALIZAR CONTAS                                       " << endl;
		cout << "    CÓDIGO -> (3):     EXCLUIR CONTA                                           " << endl;
		cout << "    CÓDIGO -> (4):     SACAR                                                   " << endl;
		cout << "    CÓDIGO -> (5):     DEPOSITAR                                               " << endl;
		cout << "    CÓDIGO -> (6):     EMITIR EXTRATO                                          " << endl;

	}

	void escolherAcao() {

		int opcao;
		char decisao;
		Agencia ag;

		do{

			menu();
			
			cout << "Informe o código da operação a ser executada:" << endl;
			cin >> opcao;

			if(opcao == 1) {
				ag.criarConta();
			}
			else if(opcao == 2) {
				ag.verificarContas();
			}
			else if(opcao == 3) {
				ag.excluirConta();
			}
			else if(opcao == 4) {
				ag.sacar();
			}
			else if(opcao == 5) {
				//ag.depositar(2500.50);
			}
			else if(opcao == 6) {
				//ag.emitirExtrato();
			}

			cout << "Deseja continuar no programa" << endl;
			cin >> decisao;

		} while(decisao != 'n' || decisao != 'N');	

	}