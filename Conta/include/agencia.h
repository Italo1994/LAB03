#ifndef _AGENCIA_H_
#define _AGENCIA_H_

#include <string>
#include <vector>
#include "conta.h"
#include "movimentacoes.h"

using std::vector;
using std::string;
	
	/**
	*@brief Classe Agencia
	*@details Classe que define as características
	*e métodos de uma agência bancária. Essa mesma classe 
	*herda da classe Conta
	*/
	class Agencia : public Conta {
		public:
			/**
			*@brief Construtor Agencia
			*@details Construtor padrão
			*da classe Agencia
			*/
			Agencia();
			/**
			*@brief método destrutor da classe Agencia
			*@details método destrutor da classe Agencia
			*que será invocado explicitamente quando
			*um objeto não estiver mais sendo utilizado
			*/
			virtual ~Agencia();

		protected:
			/**
			*@brief vetor de contas da classe Conta
			*/
			vector<Conta> m_contas;
			//vector<Agencia> m_agencias;

		public:

			/**
			*@brief método criaCconta
			*@details método que define a criação da conta
			*/
			void criarConta();	

			/**
			*@brief método verificarContas
			*@details método que define a verificação das contas
			*/
			void verificarContas();

			/**
			*@brief método excluirConta
			*@details método que define a exclusão de contas
			*/
			void excluirConta();

			void sacar();

			void depositar();

			void emitirExtrato();

			vector<Conta> getContas();

	};


#endif