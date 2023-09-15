cc = gcc
flags = -Wall -o
src = tree.c
out = tree

all:
	$(cc) $(flags) $(out) $(src)
