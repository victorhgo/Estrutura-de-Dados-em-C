# MC202 - Professor Rafael Crivellari Saliba Schouery

all: programa_final

programa_final: cliente.o complexos.o
	gcc cliente.o complexos.h -lm -o programa_final

cliente.o: cliente.c complexos.c
	gcc -ansi -Wall -pedantic-errors -Werror -c cliente.c

complexos.o: complexos.c complexos.h
	gcc -ansi -Wall -pedantic-errors -Werror -c complexos.c
