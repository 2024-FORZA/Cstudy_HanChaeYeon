// 1159

#include <stdio.h>
int main() {

	int N;
	int cnt = 0;
	char name[30];
	int first[26] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", name);
		first[name[0] - 97]++;
	}
	for (int j = 0; j < 26; j++) {
		if (first[j] >= 5) {
			printf("%c", j + 97);
			cnt++;
		}
	}
	if (cnt == 0) {
		printf("PREDAJA");
	}
}