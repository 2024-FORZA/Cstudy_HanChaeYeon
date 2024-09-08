// 10173

#include <stdio.h>
#include <string.h>

int main() {

	char stc[81];
	char nemo[5] = "NEMO";

	while (1) {

		int ans = 0;

		gets(stc);
		int cnt = strlen(stc);
		if (cnt == 3 && stc[0] == 'E' && stc[1] == 'O' && stc[2] == 'I') {
			break;
		}

		for (int i = 0; i < cnt; i++) {
			if (stc[i] >= 'a' && stc[i] <= 'z') {
				stc[i] -= 'a';
				stc[i] += 'A';
			}
		}

		for (int i = 0; i < cnt - 3; i++) {
			int found = 1;
			for (int j = 0; j < 4; j++) {
				if (stc[i + j] != nemo[j]) {
					found = 0;
				}
			}
			if (found == 1) {
				ans = 1;
			}
		}

		if (ans == 0) {
			printf("Missing\n");
		}
		else {
			printf("Found\n");
		}
	}
}