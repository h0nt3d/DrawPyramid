#include <stdio.h>

void drawPyramid(int limit) {
	char text = '|';
	for (int i = 1; i < limit; i++) {
		int temp = 0;
		while (temp < (limit - limit + i)) {
			printf("%c", text);
			temp++;
		}
		printf("\n");
	}
}

int main() {
	drawPyramid(10);
	return 0;
}
