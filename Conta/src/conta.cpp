#include <string>
#include "conta.h"

using std::string;

	Conta::Conta(string m_agencia, int m_numero, double m_saldo, string m_status, double m_limite, double m_limiteDisponivel, int m_movimentacao, int m_numMovimentacoes) : 
		agencia(m_agencia), numero(m_numero), saldo(m_saldo), status(m_status), limite(m_limite), limiteDisponivel(m_limiteDisponivel), movimentacoes(m_movimentacao), numMovimentacao(m_numMovimentacoes) {

	}

	Conta::Conta(){

	}

	Conta::~Conta(){

	}

	void Conta::setAgencia(string m_agencia){
		agencia = m_agencia;
	}

	void Conta::setNumero(int m_numero){
		numero = m_numero;
	}

	void Conta::setSaldo(double m_saldo){
		saldo = m_saldo;
	}

	void Conta::setStatus(string m_status){
		status = m_status;
	}

	void Conta::setLimite(double m_limite){
		limite = m_limite;
	}

	void Conta::setMovimentacoes(int m_movimentacoes){
		movimentacoes = m_movimentacoes;
	}

	void Conta::setNumMovimentacoes(int m_numMov){
		numMovimentacao = m_numMov;
	}

	void Conta::setId(int m_idConta){
		idConta = m_idConta;
	}

	string Conta::getAgencia(){
		return agencia;
	}

	int Conta::getNumero(){
		return numero;
	}

	double Conta::getSaldo(){
		return saldo;
	}

	string Conta::getStatus(){
		return status;
	}

	double Conta::getLimite(){
		return limite;
	}

	int Conta::getMovimentacoes(){
		return movimentacoes;
	}

	int Conta::getId(){
		return idConta;
	}

	int Conta::getNumMovimentacoes(){
		return numMovimentacao;
	}

	int Conta::totalContas = 0;

