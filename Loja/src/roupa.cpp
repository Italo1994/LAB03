#include "roupa.h"
#include "produto.h"

#include <string>

using namespace std;


	Roupa::Roupa( string m_marca, string m_tamanho, char m_sexo ) : marca(m_marca), tamanho(m_tamanho),
		sexo(m_sexo) {

	}

	Roupa::Roupa(){

	}

	Roupa::~Roupa(){

	}

	void Roupa::setMarca(string m_marca) {
		marca = m_marca;
	}

	string Roupa::getMarca(){
		return marca;
	}

	void Roupa::setTamanho(string m_tamanho){
		tamanho = m_tamanho;
	}

	string Roupa::getTamanho(){
		return tamanho;
	}

	void Roupa::setSexo(char m_sexo){
		sexo = m_sexo;
	}

	char Roupa::getSexo(){
		return sexo;
	}
