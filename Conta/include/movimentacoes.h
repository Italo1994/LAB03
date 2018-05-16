#ifndef _MOVIMENTACOES_H_
#define _MOVIMENTACOES_H_

#include <string>

using std::string;

	/**
	*@brief Classe Movimentacao
	*@details Classe que define as características
	*e métodos de uma movimentacao bancária
	*/
	class Movimentacao {
		public:
			/**
			*@brief Construtor Movimentacao
			*@details Construtor parametrizado
			*da classe Movimentacao
			*@param m_descricao string que irá inicializar o atributo "descricao" da classe
			*@param m_valor valor que irá inicializar o atributo "valor" da classe
			*@param m_indicacao string que irá inicializar o atributo "indicacao" da classe
			*/
			Movimentacao(string m_descricao, double m_valor, string m_indicacao);
			
			Movimentacao();
			/**
			*@brief método destrutor da classe Movimentacao
			*@details método destrutor da classe Movimentacao
			*que será invocado explicitamente quando
			*um objeto não estiver mais sendo utilizado
			*/
			virtual ~Movimentacao();

			/**
			*@brief variável estática totalMovimentacoes
			*@details variável que é incrementada
			*toda vez que uma movimentacao é realizada
			*/
			static int totalMovimentacoes;

		protected:
			string descricao;
			double valor;
			string indicacao;

		public:
			/**
			*@brief método setDescricaoMovimentacao
			*@details método que define a descrição da movimentacao
			*/
			void setDescricaoMovimentacao(string m_descricao);
			/**
			*@brief método setValorMovimentacao
			*@details método que define o valor da movimentacao
			*/
			void setValorMovimentacao(double m_valor);
			/**
			*@brief método setIndicacaoMovimentacao
			*@details método que define a indicação da movimentacao
			*/
			void setIndicacaoMovimentacao(string m_indicacao);

			/**
			*@brief método getDescricaoMovimentacao
			*@details método que retorna a descricao da movimentacao
			*/
			string getDescricaoMovimentacao();
			/**
			*@brief método getValorMovimentacao
			*@details método que retorna o valor da movimentacao
			*/
			double getValorMovimentacao();
			/**
			*@brief método getIndicacaoMovimentacao
			*@details método que retorna a indicação da movimentacao
			*/
			string getIndicacaoMovimentacao();	
	};


#endif