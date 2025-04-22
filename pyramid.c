#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char randomChar() {
	srand(time(0));
	return rand() % (0x7E - 0x21 + 1) + 0x21;
}

void drawPyramid(int limit)  
{
	for (int i = 1; i <= limit; i++) {
		char temp = 0;
		while (temp < (limit - limit + i)) {
			printf("%c", randomChar());
			temp++;
		}
		usleep(100000);
		printf("\n");
	}
	for (int i = 1; i <= limit; i++) {
		char temp = limit;
		while(temp > i - 1) {
			printf("%c", randomChar());
			temp--;
		}
		usleep(100000);
		printf("\n");
	}
}

int main(int argc, char *argv[]) 
{
	while (1) {
		drawPyramid(strtol(argv[1], NULL, 10));
	}
	//printf("%c\n", randomChar());	
	return 0;
}
