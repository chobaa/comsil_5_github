#include <stdio.h>
#include <stdlib.h>

int main() {
	int check[30] = {0, };
	while (1) {
		char character;
		scanf("%c", &character);
		if (character == '\n') break;
		else if ((int)character < 91) {
			check[(int)character - 65] += 1;
		}
		else {
			check[(int)character - 97] += 1;
		}
	}
	int max = 0;
	int secondmax = 0;
	int position;
	for (int i = 0; i < 26; i++) {
		if (max <= check[i]) {
			secondmax = max;
			max = check[i];
			position = i;
		}
	}
	if (secondmax == max) printf("?\n");
	else if (position <= 25) printf("%c\n", position + 65);

	return 0;

}