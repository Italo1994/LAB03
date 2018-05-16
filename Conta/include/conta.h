#ifndef _CONTA_H_
#define _CONTA_H_

#include <string>
#include "movimentacoes.h"

using std::string;

	/**
	*@brief Classe Conta
	*@details Classe que define as características
	*e métodos de uma conta bancária. Essa mesma classe 
	*herda da classe Movimentacao
	*/
	class Conta : public Movimentacao {
		public:
			static int totalContas;
			/**
			*@brief Construtor Conta
			*@details Construtor parametrizado
			*da classe Conta
			*@param m_agencia string que irá inicializar o atributo "agencia" da classe
			*@param m_numero valor que irá inicializar o atributo "numero" da classe
			*@param m_saldo valor que irá inicializar o atributo "saldo" da classe
			*@param m_status string que irá inicializar o atributo "status" da classe
			*@param m_limite valor que irá inicializar o atributo "limite" da classe
			*@param m_limiteDisponivel valor que irá inicializar o atributo "limiteDisponivel" da classe
			*@param m_movimentacao valor que irá inicializar o atributo "movimentacoes" da classe
			*@param m_numMovimentacoes valor que irá inicializar o atributo "numMovimentacoes" da classe
			*/
			Conta(string m_agencia, int m_numero, double m_saldo, string m_status, double m_limite, double m_limiteDisponivel, int m_movimentacao, int m_numMovimentacoes);
			Conta();
			/**
			*@brief método destrutor da classe Conta
			*@details método destrutor da classe Conta
			*que será invocado explicitamente quando
			*um objeto não estiver mais sendo utilizado
			*/
			virtual ~Conta();

		protected:
			string agencia;
			int numero;
			double saldo;
			string status;
			double limite;
			double limiteDisponivel;
			int movimentacoes;
			int idConta;
			int numMovimentacao;

		public:
			/**
			*@brief método setAgencia
			*@details método que define a agência da conta
			*/
			void setAgencia(string m_agencia);
			/**
			*@brief método setNumero
			*@details método que define o número da conta
			*/
			void setNumero(int m_numero);
			/**
			*@brief método setSaldo
			*@details método que define o saldo da conta
			*/
			void setSaldo(double m_saldo);
			/**
			*@brief método setStatus
			*@details método que define o status da conta
			*/
			void setStatus(string m_status);
			/**
			*@brief método setLimite
			*@details método que define o limite da conta
			*/
			void setLimite(double m_limite);
			/**
			*@brief método setMovimentacoes
			*@details método que define as movimentações da conta
			*/
			void setMovimentacoes(int m_movimentacoes);
			/**
			*@brief método setId
			*@details método que define o ID da conta
			*/
			void setId(int m_idConta);
			/**
			*@brief método setNumMovimentacoes
			*@details método que define o número de movimentações da conta
			*/
			void setNumMovimentacoes(int m_numMov);

			/**
			*@brief método getAgencia
			*@details método que retorna a descrição da conta
			*/
			string getAgencia();
			/**
			*@brief método getNumero
			*@details método que retorna o número da conta
			*/
			int getNumero();
			/**
			*@brief método getSaldo
			*@details método que retorna o saldo da conta
			*/
			double getSaldo();
			/**
			*@brief método getStatus
			*@details método que retorna o status da conta
			*/
			string getStatus();
			/**
			*@brief método getLimite
			*@details método que retorna o limite da conta
			*/
			double getLimite();
			/**
			*@brief método getMovimentacoes
			*@details método que define as movimentações da conta
			*/
			int getMovimentacoes();
			/**
			*@brief método getId
			*@details método que retorna o ID da conta
			*/
			int getId();
			/**
			*@brief método getNumMovimentacoes
			*@details método que retorna o número de movimentações da conta
			*/
			int getNumMovimentacoes();


	};


#endif