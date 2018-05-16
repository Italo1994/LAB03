#include <string>
#include <vector>
#include <iostream>
//#include <stdlib.h>
#include "agencia.h"
#include "movimentacoes.h"

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

	Agencia::Agencia(){

	}

	Agencia::~Agencia(){

	}

	void Agencia::criarConta(){
		string m_agencia;
		int m_numero;
		double m_saldo;
		string m_status;
		double m_limite;
		//double m_limiteDisponivel;
		//int m_movimentacoes;

		Conta c;

		cout << endl << "CRIAR CONTA" << endl << endl;

		cout << "Informe a agência: " << endl;
		cin >> m_agencia;
		
		cout << "Informe o número da conta: " << endl;
		cin >> m_numero;

		cout << "Informe o saldo: " << endl;
		cin >> m_saldo;

		cout << "Informe o status da conta: " << endl;
		cin >> m_status;

		cout << "Informe o limite da conta: " << endl;
		cin >> m_limite;

		c.setAgencia(m_agencia);
		c.setNumero(m_numero);
		c.setSaldo(m_saldo);
		c.setStatus(m_status);
		c.setLimite(m_limite);

		Conta::totalContas++;

		c.setId(totalContas);

		m_contas.push_back(c);
	}

	void Agencia::verificarContas(){
		unsigned int size = m_contas.size();

		cout << "Lista de contas da agência" << endl;

		for(unsigned int i = 0; i < size; i++){
			cout << "Agência: " << m_contas[i].getAgencia() << endl;

			cout << "Número da conta: " << m_contas[i].getNumero() << endl;

			cout << "Saldo: " << m_contas[i].getSaldo() << endl;

			cout << "Status da conta: " << m_contas[i].getStatus() << endl;

			cout << "Limite da conta: " << m_contas[i].getLimite() << endl;

			if(m_contas[i].getNumMovimentacoes() != 0){

				cout << "------MOVIMENTAÇÕES-----" << cout << endl;

				cout << "Descrição da movimentação: " << m_contas[i].getDescricaoMovimentacao() << endl;

				cout << "Valor da movimentação: " << m_contas[i].getValorMovimentacao() << endl;

				cout << "Indicação da movimentação: " << m_contas[i].getIndicacaoMovimentacao() << endl;

			}		

			cout << "ID: " << m_contas[i].getId() << endl << endl;

			cout << "NUM = " << Movimentacao::totalMovimentacoes << endl;

		}
	}


	vector<Conta> Agencia::getContas(){
		return m_contas;
	}

	void Agencia::excluirConta(){
		int chave;

		cout << "Informe o ID da conta que deseja excluir: " << endl;
		cin >> chave;

		m_contas.erase( m_contas.begin()+chave );

	}

	void Agencia::sacar(){

		double valorSaque;

		int numConta;

		cout << "Informe o número da conta que deseja sacar: " << endl;
		cin >> numConta;

		unsigned int size = m_contas.size();

		for(unsigned int i = 0; i < size; i++) {

			if( numConta == m_contas[i].getNumero() ) {

				cout << "Qual o valor que deseja sacar? " << endl;
				cin >> valorSaque;

				if( valorSaque > m_contas[i].getSaldo() ) {
					cout << "Desculpe, você não possui saldo suficiente para realizar essa operação" << endl;
				}
				else{
					m_contas[i].setSaldo(m_contas[i].getSaldo() - valorSaque);
				}

			}
		}	

	}

	void Agencia::depositar(){

		double valorDeposito;

		int numConta;

		cout << "Informe o número da conta que deseja depositar: " << endl;
		cin >> numConta;

		unsigned int size = m_contas.size();

		for(unsigned int i = 0; i < size; i++) {

			if( numConta == m_contas[i].getNumero() ) {

				cout << "Qual o valor que deseja sacar? " << endl;
				cin >> valorDeposito;

				if( valorDeposito > m_contas[i].getSaldo() ) {
					cout << "Desculpe, você não possui saldo suficiente para realizar essa operação" << endl;
				}
				else{
					m_contas[i].setSaldo(m_contas[i].getSaldo() - valorDeposito);
					m_contas[i].setDescricaoMovimentacao("Débito");
					m_contas[i].setValorMovimentacao(valorDeposito);
					m_contas[i].setIndicacaoMovimentacao("SHYLA");

					m_contas[i].setNumMovimentacoes(1);

					Movimentacao::totalMovimentacoes++;
				}

			}
		}	

	}
	