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
			printf("%c", randomChar());
			temp--;
		}
		usleep(100000);
		printf("\n");
	}
}

int main(int argc, char *argv[]) 
{
	if (argc < 2)
		printf("Length needed. Recommended Length [5 - 15]\n");
	else if (atoi(argv[1]) > 15 || atoi(argv[1]) < 5)
		printf("Recommended Length [5 - 15]\n");
	else
		system("clear");
		while (1) {drawPyramid(atoi(argv[1]));}
	return 0;
}
