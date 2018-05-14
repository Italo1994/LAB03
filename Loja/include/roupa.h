#ifndef _ROUPA_H_
#define _ROUPA_H_

#include "produto.h"
#include <string>

using namespace std;
	
	class Roupa: public Produto {
		public:
			Roupa(string m_marca, string m_tamanho, char m_sexo);
			Roupa();
			virtual ~Roupa();

		private:
			string marca;
			string tamanho;
			char sexo;

		public:	
			void setMarca(string m_marca);
			string getMarca();

			void setTamanho(string m_tamanho);
			string getTamanho();

			void setSexo(char m_sexo);
			char getSexo();	

	};

#endif