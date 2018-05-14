#ifndef _FRUTA_H_
#define _FRUTA_H_

#include "produto.h"
#include <string>

using namespace std;

	class Fruta: public Produto {
		public:	
			Fruta(string m_dataLote, string m_dataValidade);
			Fruta();
			virtual ~Fruta();

		protected:
			string dataLote;
			string dataValidade;

		public:
			void setDataLote(string m_dataLote);
			string getDataLote();

			void setDataValidade(string m_dataValidade);
			string getDataValidade();

	};

#endif	