build:
	gcc src/vpyramid.c -o vpyramid
	sudo mv vpyramid /usr/bin

clean:
	rm -rf /usr/bin/vpyramid
	

