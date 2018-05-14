CPPFLAGS	=	-Wall	-ansi	-pedantic	-g	-O0


all:
	g++	-c	./src/produto.cpp	-I	./include	-std=c++11	-o	./objs/produto.o
	
	g++	-c	./src/roupa.cpp	-I	./include	-std=c++11	-o	./objs/roupa.o
	
	g++	-c	./src/bebida.cpp	-I	./include	-std=c++11	-o	./objs/bebida.o
	
	g++	-c	./src/fruta.cpp	-I	./include	-std=c++11	-o	./objs/fruta.o

	
	g++	./testes/teste.cpp	./objs/*.o	-I	./include	-o	./bin/testeLoja



run:
	./bin/testeLoja	


clean:
	rm	./objs/*.o
	rm	./bin/*
