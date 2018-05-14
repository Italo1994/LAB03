#include <iostream>
#include <string>

#include "produto.h"
#include "roupa.h"
#include "bebida.h"
#include "fruta.h"

using namespace std;

int main(int argc, char* argv[]){
	
	Roupa rp;

	rp.setMarca("Ecológica");
	rp.setTamanho("P");
	rp.setSexo('M');
	rp.setCodigoBarras("1111 2222 3333 4444");
	rp.setDescricao("Camisa de malha fria");
	rp.setPreco(128.55);

	double soma;

	Roupa rp1;

	rp1.setMarca("Ecológica");
	rp1.setTamanho("P");
	rp1.setSexo('M');
	rp1.setCodigoBarras("1111 2222 3333 4444");
	rp1.setDescricao("Camisa de malha fria");
	rp1.setPreco(148.55);

	cout << "Marca: " << rp.getMarca() << endl;
	cout << "Tamanho: " << rp.getTamanho() << endl;
	cout << "Sexo: " << rp.getSexo() << endl;
	cout << "Código de barras: " << rp.getCodigoBarras() << endl;
	cout << "Descrição: " << rp.getDescricao() << endl;
	cout << "Preço: " << rp.getPreco() << endl;

	//cout << "Soma: " << soma << endl;
	
	double r3 = (rp) + (rp1);

	cout << r3 << endl;




	return 0;
}