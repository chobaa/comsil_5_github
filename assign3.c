#include <stdio.h>
#include <stdlib.h>
#include <math.h>;

int main() {
	int n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d%*c", &a, &b);
		int distance = b - a;
		int count = 0;
		int velocity = 0;
		int total = 0;
		while (1) {
			velocity++;
			total += velocity;
			if (total >= distance) {
				while (1) {
					total -= velocity;
					if (distance >= total) break;
					velocity--;
				}
				if (distance > total) count += velocity;
				else if (total == distance) count += velocity - 1;
				break;
			}
			distance -= velocity;
			count++;
		}
		printf("%d\n", count);
	}
}