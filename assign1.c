#include <stdio.h>
#include <stdlib.h>

int main() {
	char check;
	char temp = ' ';
	int count = 0;
	while (1) {
		scanf("%c", &check);
		if (check == '\n') {
			if (temp != ' ') count++;
			break;
		}
		if (check == ' ') {
			if (temp != ' ') count++;
		}

		temp = check;
	}

	printf("%d\n", count);

	return 0;
}