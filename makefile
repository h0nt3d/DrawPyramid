SRC = src/vpyramid.c
DIR = /usr/bin
PROGRAM = vpyramid

build:
	gcc $(SRC) -o $(PROGRAM)
	sudo mv $(PROGRAM) $(DIR)
	clear


	

