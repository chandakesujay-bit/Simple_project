# Makefile to build calculator program

cal.exe: main.c add.c sub.c mul.c div.c
	gcc main.c add.c sub.c mul.c div.c -o cal.exe

clean:
	rm -f cal.exe
