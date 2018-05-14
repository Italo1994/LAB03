#include "fruta.h"
#include "produto.h"

#include <string>

using namespace std;

	Fruta::Fruta(string m_dataLote, string m_dataValidade): dataLote(m_dataLote),
		dataValidade(m_dataValidade) {
	}

	Fruta::Fruta(){

	}

	Fruta::~Fruta(){

	}

	void Fruta::setDataLote(string m_dataLote){
		dataLote = m_dataLote;
	}

	string Fruta::getDataLote(){
		return dataLote;
	}

	void Fruta::setDataValidade(string m_dataValidade){
		dataValidade = m_dataValidade;
	}

	string Fruta::getDataValidade(){
		return dataValidade;
	}