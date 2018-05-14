#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <string>

using namespace std;

	class Produto {
		public:
			Produto();
			Produto(string m_codigo, string m_descricao, short _preco);
			virtual ~Produto();

		protected:
			string codigo_barras;
			string descricao;
			double preco;

		public:
			void setCodigoBarras(string m_codBarras);	
			string getCodigoBarras();

			void setDescricao(string m_descricao);
			string getDescricao();

			void setPreco(double m_preco);
			double getPreco();

			double operator + (Produto p);

	};

#endif