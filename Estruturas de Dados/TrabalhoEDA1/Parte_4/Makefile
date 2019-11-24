a.out:	ArvoreBinaria.o
	@gcc -Wall -Wextra -Werror -Wpedantic main.c ArvoreBinaria.o
	@rm -rf *.o
	@./a.out
	@rm -rf *.out

ArvoreBinaria.o:	ArvoreBinaria.c
	gcc -Wall -Wextra -Werror -Wpedantic -c ArvoreBinaria.c -o ArvoreBinaria.o

clear:
	@rm -rf *.o
	@rm -rf a.out