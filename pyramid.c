#include <time.h>
#include <stdio.h>

void delay(int seconds) 
{
	int milliSeconds = 1000 * seconds;
	clock_t startTime = clock();
	while (clock() < startTime + milliSeconds);
}

void drawPyramid(int limit) 
{
	char text = '|';
	for (int i = 1; i < limit; i++) {
		int temp = 0;
		while (temp < (limit - limit + i)) {
			delay(5);
			printf("%c", text);
			temp++;
		}
		delay(5);
		printf("\n");
	}
}

int main() 
{
	drawPyramid(10);
	return 0;
}
