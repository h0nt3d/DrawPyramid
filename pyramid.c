#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void delay(int seconds) 
{
	int milliSeconds = 1000 * seconds;
	clock_t startTime = clock();
	while (clock() < startTime + milliSeconds);
}

void drawPyramid(int limit) 
{
	char text = '|';
	for (int i = 1; i <= limit; i++) {
		int temp = 0;
		while (temp < (limit - limit + i)) {
			delay(5);
			printf("%c", text);
			temp++;
		}
		delay(5);
		printf("\n");
	}
	for (int i = 1; i <= limit; i++) {
		int temp = limit;
		while(temp > i - 1) {
			delay(5);
			printf("%c", text);
			temp--;
		}
		delay(5);
		printf("\n");
	}
}

int main(int argc, char *argv[]) 
{
	drawPyramid(strtol(argv[1], NULL, 10));
	return 0;
}
