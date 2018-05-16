CPPFLAGS	=	-Wall	-ansi	-pedantic	-g	-O0


all:
	g++	-c	./src/agencia.cpp	-I	./include	-std=c++11	-Wall	-g	-O0	-ansi	-pedantic	-o	./objs/agencia.o
	
	g++	-c	./src/conta.cpp	-I	./include	-std=c++11	-Wall	-g	-O0	-ansi	-pedantic	-o	./objs/conta.o
	
	g++	-c	./src/interface.cpp	-I	./include	-std=c++11	-Wall	-g	-O0	-ansi	-pedantic	-o	./objs/interface.o

	g++	-c	./src/movimentacoes.cpp	-I	./include	-std=c++11	-Wall	-g	-O0	-ansi	-pedantic	-o	./objs/movimentacoes.o
	
	g++	./testes/teste.cpp	./objs/*.o	-I	./include	-std=c++11	-Wall	-g	-O0	-ansi	-pedantic	-o	./bin/testeConta



run:
	./bin/testeConta


clean:
	rm	./objs/*.o
	rm	./bin/*
