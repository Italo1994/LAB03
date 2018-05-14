#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "produto.h"
#include <string>

using namespace std;

	class Bebida: public Produto{
		public:
			Bebida(int m_teorAlcoolico);
			Bebida();
			virtual ~Bebida();

		protected:
			int teorAlcoolico;

		public:	
			void setTeorAlcoolico(int m_teorAlcoolico);
			int getTeorAlcoolico();	
	};

#endif