#include "game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols, int set){
    for(int a = 0; a < rows; a++){
        for (int b = 0; b < cols; b++){
            board[a][b] = set; 
        }
    }
}


void DisplayBoard(char board[ROWS][COLS], int row, int col){
    printf("  ");
    for(int i = 1; i <= row; i++){
        printf("%d ", i);
    }
    printf("\n");

    for(int a = 1; a <= row; a++){
        printf("%d ", a);
        for (int b = 1; b <= col; b++){
            printf("%c ", board[a][b]);  
        }
        printf("\n");
    }
}


void SetMine(char board[ROWS][COLS], int row, int col){
    int country = easy_game;
    while (country)
    {
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if(board[x][y] == '0'){
            board[x][y] = '1';
            country --;
    }
    }
}

int get_Mine(char mine[][COLS], int x, int y){
    return  mine[x-1][y] +
            mine[x-1][y-1] +
            mine[x][y-1] +
            mine[x+1][y-1] +
            mine[x+1][y] +
            mine[x+1][y+1] +
            mine[x][y+1] +
            mine[x-1][y+1] - 8 * '0';

}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){
    int x,y;
    int win = 0;
    while(win < ROW * COL - easy_game){
        printf("请输入扫雷的坐标:>  ");
        scanf("%d%d", &x, &y);
        if(x >= 1 && x <= row && y >= 1 && y <= col){
            if(mine[x][y] == '1'){
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine, ROW, COL);
                break;
            }else{
                int a = get_Mine(mine, x, y);
                show[x][y] = a + '0';
                DisplayBoard(show, ROW, COL);
                win++;
            }
        }else{
            printf("输入错误，请重新输入\n");
        }
    }
    if(win == ROW * COL - easy_game){
        printf("恭喜你，排雷成功\n");
    }
}




