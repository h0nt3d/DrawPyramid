#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>


char randomChar() 
{
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

void uninstall(char *file) 
{
	chdir("/usr/bin");
	pid_t p = fork();
	if (p == 0) {
		sleep(1);
		if (remove(file) == 0) {
			printf("vypramid removed\n");
			fflush(stdout);
			exit(0);
		}
		else {
			printf("Unable to remove file\n");
			fflush(stdout);
			exit(1);
		}
	}
}

int main(int argc, char *argv[]) 
{
	
	if (strcmp(argv[1], "remove") == 0) {
		uninstall(argv[0]);
	}
		
	else if (argc < 2)
		printf("Length needed. Recommended Length [5 - 15]\n");
	else if (atoi(argv[1]) > 15 || atoi(argv[1]) < 5)
		printf("Recommended Length [5 - 15]\n");
	else {
		system("clear");
		while (1) {drawPyramid(atoi(argv[1]));}
	}
	
	return 0;
}
