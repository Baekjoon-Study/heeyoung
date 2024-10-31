#include <stdio.h>
#include <string.h>

int main() {

	int t;
	char string[21];
	int repeat;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %s", &repeat, string);
		for (int j = 0; j < strlen(string); j++) {
			for (int k = 0; k < repeat; k++) {
				printf("%c", string[j]);
			}
		}
		printf("\n");
	}

	return 0;
}