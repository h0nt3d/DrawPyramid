#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void drawPyramid(int limit) 
{
	for (int i = 1; i <= limit; i++) {
		char temp = 0;
		while (temp < (limit - limit + i)) {
			printf("|");
			temp++;
		}
		//delay(10);
		usleep(100000);
		printf("\n");
	}
	for (int i = 1; i <= limit; i++) {
		char temp = limit;
		while(temp > i - 1) {
			printf("|");
			temp--;
		}
		//delay(10);
		usleep(100000);
		printf("\n");
	}
}

int main(int argc, char *argv[]) 
{
	while (1) {
		drawPyramid(strtol(argv[1], NULL, 10));
	}
	return 0;
}
