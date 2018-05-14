#include "bebida.h"

using namespace std;

	Bebida::Bebida(int m_teorAlcoolico): teorAlcoolico(m_teorAlcoolico){

	}

	Bebida::Bebida() {

	}

	Bebida::~Bebida(){

	}

	void Bebida::setTeorAlcoolico(int m_teorAlcoolico){
		teorAlcoolico = m_teorAlcoolico;
	}

	int Bebida::getTeorAlcoolico() {
		return teorAlcoolico;
	}