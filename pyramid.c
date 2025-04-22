#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void drawPyramid(int limit, char text)  
{
	for (int i = 1; i <= limit; i++) {
		char temp = 0;
		while (temp < (limit - limit + i)) {
			printf("%c", text);
			temp++;
		}
		usleep(100000);
		printf("\n");
	}
	for (int i = 1; i <= limit; i++) {
		char temp = limit;
		while(temp > i - 1) {
			printf("%c", text);
			temp--;
		}
		usleep(100000);
		printf("\n");
	}
}

char randomChar() {
	srand(time(0));
	return rand() % (0x7E - 0x21 + 1) + 0x21;
}

int main(int argc, char *argv[]) 
{
	//while (1) {
	//	drawPyramid(strtol(argv[1], NULL, 10), *argv[2]);
	//}
	printf("%d\n", randomChar());	
	return 0;
}
