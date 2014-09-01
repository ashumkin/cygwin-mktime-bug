CC = gcc
LIB = /usr/include
FLAGS = -g
all:
	${CC} cygwin-mktime-bug.c -o cygwin-mktime-bug -I${LIB} ${FLAGS}
