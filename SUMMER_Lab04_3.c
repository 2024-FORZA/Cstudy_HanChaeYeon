// 2669

#include <stdio.h>
int main() {

	int map[101][101] = { 0 };
	int x1, y1, x2, y2;
	int result = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int i = x1; i < x2; i++) {
			for (int j = y1; j < y2; j++) map[i][j] = 1;
		}
	}
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (map[i][j] == 1) result++;
		}
	}
	printf("%d", result);
	return 0;
}