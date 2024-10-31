#include <stdio.h>
#include <string.h>

int main() {

	int t;
	char string[21];
	int rotation;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %s", &rotation, string);
		for (int j = 0; j < strlen(string); j++) {
			for (int k = 0; k < rotation; k++) {
				printf("%c", string[j]);
			}
		}
		printf("\n");
	}

	return 0;
}