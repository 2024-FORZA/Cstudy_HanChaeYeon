// 4963

#include <stdio.h>

int visit[50][50] = { 0 };
int map[50][50];
int dx[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int dy[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int w, h;

void DFS(int x, int y) {
    int i, nx, ny;
    visit[x][y] = 1;

    for (i = 0; i < 8; i++) {
        nx = x + dx[i];
        ny = y + dy[i];

        if (nx >= h || nx < 0 || ny >= w || ny < 0) {
            continue;
        }

        if (visit[nx][ny] == 0 && map[nx][ny] == 1) {
            DFS(nx, ny);
        }
    }
}

int main() {
    int cnt;
    int i, j;

    while (1) {
        scanf("%d%d", &w, &h);
        if (w == 0 && h == 0) {
            return 0;
        }

        for (i = 0; i < 50; i++) {
            for (j = 0; j < 50; j++) {
                visit[i][j] = 0;


            }
        }
        cnt = 0;

        for (i = 0; i < h; i++) {
            for (j = 0; j < w; j++) {
                scanf("%d", &map[i][j]);
            }
        }

        for (i = 0; i < h; i++) {
            for (j = 0; j < w; j++) {
                if (visit[i][j] == 0 && map[i][j] == 1) {
                    DFS(i, j);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}