#include <string>
#include "movimentacoes.h"

using std::string;


	Movimentacao::Movimentacao(string m_descricao, double m_valor, string m_indicacao) : 
		descricao(m_descricao), valor(m_valor), indicacao(m_indicacao) {

	}

	Movimentacao::Movimentacao(){

	}

	Movimentacao::~Movimentacao(){

	}

	void Movimentacao::setDescricaoMovimentacao(string m_descricao){
		descricao = m_descricao;
	}

	void Movimentacao::setValorMovimentacao(double m_valor){
		valor = m_valor;
	}

	void Movimentacao::setIndicacaoMovimentacao(string m_indicacao){
		indicacao = m_indicacao;
	}

	string Movimentacao::getDescricaoMovimentacao(){
		return descricao;
	}

	double Movimentacao::getValorMovimentacao(){
		return valor;
	}

	string Movimentacao::getIndicacaoMovimentacao(){
		return indicacao;
	}

	int Movimentacao::totalMovimentacoes = 0;