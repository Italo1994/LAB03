#include <string>
#include <iostream>

#include "produto.h"

using namespace std;

	Produto::Produto(string m_codigo, string m_descricao, short m_preco): codigo_barras(m_codigo), descricao(m_descricao), preco(m_preco){

	}

	Produto::Produto(){

	}

	Produto::~Produto() {

	}

	void Produto::setCodigoBarras(string m_codBarras) {
		codigo_barras = m_codBarras;
	}

	string Produto::getCodigoBarras() {
		return codigo_barras;
	}

	void Produto::setDescricao(string m_descricao) {
		descricao = m_descricao;
	}

	string Produto::getDescricao() {
		return descricao;
	}

	void Produto::setPreco(double m_preco) {
		preco = m_preco;
	}

	double Produto::getPreco() {
		return preco;
	}

	double Produto::operator + (Produto p){
		
		return  p.getPreco() + p.getPreco();
	}

	/*ostream& operator<< (std::ostream &o, Produto const &p) {
	return p.print(o);
	}*/
